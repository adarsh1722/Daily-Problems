class Solution {
public:
    int f(int i , int j , int m , vector<vector<int>>& a , vector<vector<int>> &dp){
        if(j < 0 || j >= m ){
            return (1e9);
        }
        if(i == 0){
            return  a[0][j];
        }
        if(dp[i][j] != -1) return dp[i][j];
        int s = a[i][j] + f(i-1 , j  , m , a , dp);
        int ld = a[i][j] + f(i-1 , j-1 , m ,a , dp);
        int rd = a[i][j] + f(i-1 , j+1 , m , a , dp);
        return dp[i][j] = min({s , ld , rd});
        
        
    }
    int minFallingPathSum(vector<vector<int>>& a) {
        int n = a.size() , m = a[0].size() , maxi = INT_MAX;
        vector<vector<int>>dp(n , vector<int>(m , -1));
        for(int j = 0 ; j < m ; j++){
            int ans = f(n-1 , j , m , a , dp);
            maxi = min(maxi , ans );
            
        }
        return maxi;
    }
};