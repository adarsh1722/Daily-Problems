class Solution {
public:
    int longestCommonSubstring(string s1 , string s2){
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
    int minDistance(string s1, string s2) {
        int n = s1.size() , m = s2.size();
        int length = longestCommonSubstring(s1 , s2);
        int Deletion = n - length;
        int insertion = m - length;
        return insertion + Deletion;
        
    }
};