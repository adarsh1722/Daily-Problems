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
	int minCoins(int coins[], int n, int val) 
	{ 
	    vector<vector<int>>dp(n  , vector<int>(val+1 , -1));
	    int ans = f(n-1 , coins , val , dp);
	    if(ans >= 1e9) ans = -1;
	    return ans;
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