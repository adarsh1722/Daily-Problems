class Solution {
public:
    int fun(int i , int j, vector<vector<int>>&a , vector<vector<int>>&dp ){
        if(i < 0 || j < 0) return 0;
        if(a[i][j] == 1) return 0;
        if(i == 0 && j == 0) return 1;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        return dp[i][j] = fun(i-1 , j ,a , dp) + fun(i ,j-1 ,a , dp);
        
    }
    int uniquePathsWithObstacles(vector<vector<int>>& a) {
        
        int n = a.size() , m = a[0].size();
        vector<vector<int>>dp(n , vector<int>(m , -1));
        return fun(n-1 , m-1 , a , dp);
        
        
        
    }
};