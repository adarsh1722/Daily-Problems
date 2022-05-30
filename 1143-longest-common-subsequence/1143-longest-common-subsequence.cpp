class Solution {
public:
    int lcs(string &s1 , string &s2 , int ind1 , int ind2 , vector<vector<int>>&dp){
        if(ind1 == 0 || ind2 == 0) 
            return 0;
        
        if(dp[ind1][ind2] != -1) 
            return dp[ind1][ind2];
            
        if(s1[ind1 - 1] == s2[ind2 - 1])
            return dp[ind1][ind2] = 1 + lcs(s1 ,s2 , ind1-1 , ind2-1 , dp);
        else
            return dp[ind1][ind2] = 0 + max(lcs(s1 , s2 ,ind1-1 , ind2 , dp) ,  lcs(s1 , s2 , ind1 , ind2 - 1 , dp));
    }
    int longestCommonSubsequence(string s1, string s2) {
        
        int n = s1.size();
        int m = s2.size();
        vector<vector<int>>dp(n+1 ,vector<int>(m+1 , -1));
        for(int j = 0 ; j <= m ; j++) dp[0][j] = 0;
        for(int i = 0 ; i <= n ; i++) dp[i][0] = 0;
        
        for(int i = 1 ; i <= n ; i++){
            for(int j = 1 ; j <= m ; j++){
                
                 if(s1[i - 1] == s2[j - 1])
                    dp[i][j] = 1 + dp[i-1][j-1];
                else
                    dp[i][j] = 0 + max(dp[i][j-1],  dp[i-1][j]);
                
            }
        }
        return dp[n][m];
        
    }
};