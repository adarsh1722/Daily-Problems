// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int f(int ind , int N , int price[] , vector<vector<int>>&dp){
        if(ind == 0){
            return N*price[0];
        }
        if(dp[ind][N] != -1) return dp[ind][N];
        int notpick = 0 + f(ind-1 , N , price , dp);
        int pick = INT_MIN;
        int rodlength = ind+1;
        if(rodlength <= N){
            pick = price[ind] + f(ind , N - rodlength , price , dp);
        }
        
        return dp[ind][N] = max(pick , notpick);
        
    }
    int cutRod(int price[], int n) {
        
        vector<vector<int>>dp(n , vector<int>(n+1 , -1));
        for(int i = 0 ; i <= n ; i++){
            dp[0][i] = i*price[0];
            
        }
        
        for(int ind = 1 ; ind < n ; ind++){
            for(int N = 0 ; N <= n ; N++ ){
                int notpick = 0 + dp[ind-1][N];
                int pick = INT_MIN;
                int rodlength = ind+1;
                if(rodlength <= N){
                    pick = price[ind] + dp[ind][N - rodlength];
                }
                
                dp[ind][N] = max(pick , notpick);
        
            }
        }
        return dp[n-1][n];
    }
    
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}  // } Driver Code Ends