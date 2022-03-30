// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

const int mod = 1e9+7;

class Solution {
  public:
    long long int count(int m , int n , vector<vector<int>>&dp){
        
        if(m == 1 ||  n == 1){
            return 1;
        }
        if(dp[m][n] != -1){
            return dp[m][n];
        }
        return dp[m][n] = count(m-1 , n , dp)%(mod) + count(m , n-1 , dp)%(mod);
           
        
    }
    long long int numberOfPaths(int m, int n){
        // code here
        
        vector<vector<int>>dp(m+1 , vector<int>(n+1 , -1));
        return count(m , n , dp)%mod;
        
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> m >> n;
        Solution ob;
        cout<<ob.numberOfPaths(m,n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends