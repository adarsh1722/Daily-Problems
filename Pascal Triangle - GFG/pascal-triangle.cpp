// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

 // } Driver Code Ends
// #define ll long long
class Solution{
public:
    vector<ll> nthRowOfPascalTriangle(int n) {
        
        const long long int mod = 1e9+7;
        int numRows = n;
        vector<vector<ll>>dp(numRows);
        
        for(int i = 0 ; i < numRows ; i++)
        {
            
            dp[i].resize(i+1);
            dp[i][0] = dp[i][i] = 1; // set first and last column to 1
            
            for(int j = 1 ; j <= i-1 ; j++)
                dp[i][j] = (dp[i-1][j-1] + dp[i-1][j])%mod; 
        }
        
       
        return dp[numRows-1];
        
        
    }
};


// { Driver Code Starts.


void printAns(vector<ll> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}
  // } Driver Code Ends