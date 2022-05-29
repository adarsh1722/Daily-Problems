// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int f(int i , int coins[] , int val , vector<vector<int>>&dp){
	    // base case
	    if(i == 0){
	        if(val%coins[i] == 0) return val/coins[i];
	        else return 1e9;
	    }
	    if(dp[i][val] != -1) return dp[i][val];
	    // all possibilities
	    int notpick = 0 + f(i-1 , coins , val , dp);
	    int pick = 1e9;
	    if(coins[i] <= val){
	        pick = 1 + f(i, coins , val - coins[i], dp);
	    }
	    
	    // return max of all
	    return dp[i][val] = min(notpick , pick);
	    
	    
	}
	int minCoins(int coins[], int n, int target) 
	{ 
	    vector<vector<int>>dp(n  , vector<int>(target+1 , -1));
	    for(int T = 0 ;  T <= target ; T++){
	        if(T%coins[0] == 0) dp[0][T] =  T / coins[0];
	        else dp[0][T] = 1e9;
	    }
	    
	    for(int i = 1  ; i < n ; i++){
	        for(int T = 0 ; T <= target ; T++){
	            int nottake = 0 + dp[i-1][T];
	            int take = 1e9;
	            if(coins[i] <= T){
	                take = 1 + dp[i][T - coins[i]];
	            }
	            
	            dp[i][T] = min(take , nottake);
	        }
	    }
	    if(dp[n-1][target] >= 1e9) return -1;
	    return dp[n-1][target];
	} 
	  
};

// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends