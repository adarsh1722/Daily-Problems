// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
  int longestCommonSubsequence(string s1 , string s2){
        int n = s1.size() ,m = s2.size();
        vector<vector<int>>dp(n+1 , vector<int>(m+1 , 0));
        for(int i = 0 ; i <= n ; i++) dp[i][0] = 0;
        for(int j = 0 ; j <= m ; j++) dp[0][j] = 0;
        
        int maxx = 0 ;
        
        for(int i = 1 ; i<= n ; i++){
            for(int  j = 1 ; j <= m  ; j++){
                if(s1[i-1] == s2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                    
                }
                else
                    dp[i][j] = 0 + max(dp[i][j-1],  dp[i-1][j]);
            }
        }
        return dp[n][m];
        
    }
    int countMin(string str){
      string t = str;
      reverse(t.begin() , t.end());
      return str.size() - longestCommonSubsequence(str , t);
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        Solution ob;
        cout << ob.countMin(str) << endl;
    }
return 0;
}

  // } Driver Code Ends