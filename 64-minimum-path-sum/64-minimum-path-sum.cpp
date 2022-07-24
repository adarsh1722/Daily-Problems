class Solution {
public:
    int f(int i , int j , vector<vector<int>>&g , vector<vector<int>>&dp){
        if(i == 0 && j == 0){
            return g[0][0];
        }
        if(i < 0 || j < 0) return 1e9;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        int up = g[i][j] + f(i-1 , j , g , dp);
        int left = g[i][j] + f(i , j-1 , g , dp);
        
        return dp[i][j] = min(up , left);        
        
    }
    int minPathSum(vector<vector<int>>& g) {
        int n = g.size() , m = g[0].size();
        
        vector<int>prev(m , 0);
        
        for(int i = 0; i < n ; i++){
            vector<int>temp(m , 0);
            for(int j = 0 ; j < m ; j++){
                if(i == 0 && j == 0){
                    temp[0] = g[0][0];
                    continue;
                }
                
                int up = 1e9, left = 1e9;
                if(i > 0){
                    up = g[i][j] + prev[j];
                }
                if(j > 0){
                    left = g[i][j] + temp[j-1];
                }
                temp[j] = min(up , left);                
                
                
            }
            prev = temp;
        }
        
        return prev[m-1];
       
        
        
        
    }
};