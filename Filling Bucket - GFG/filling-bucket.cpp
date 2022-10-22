//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    const int mod = 1e8;
    int fun(int N ,  vector<int>&dp){
        if(N < 0) return 0;
        if(N == 0) return 1;
        if(dp[N] != -1) return dp[N];
        
        return dp[N] =  (fun(N-1 , dp)%mod + fun(N-2 , dp)%mod)%mod;
        
        
    }
    int fillingBucket(int N) {
         
        vector<int>dp(N+1 , 0);
        dp[0] = 1;
        
        for(int i = 1 ; i <= N ; i++){
            dp[i] = dp[i-1]%mod;
            if(i > 1)
            dp[i] = (dp[i] +  dp[i-2])%mod;
        }
        return dp[N];
        
         
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.fillingBucket(N) << endl;
    }
    return 0;
}
// } Driver Code Ends