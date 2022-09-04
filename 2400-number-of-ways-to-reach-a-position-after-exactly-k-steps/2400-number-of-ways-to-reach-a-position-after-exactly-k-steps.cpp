class Solution {
public:
    int dp[3001][1001];
    const int mod = 1e9+7;
    int f(int start , int end , int curr , int k ) {

        if(curr > k) return 0;
        if(start == end && curr == k) return 1;
        if(dp[start+1000][curr] != -1) return dp[start+1000][curr];
        int left = f(start - 1  , end   , curr + 1 , k );
        int right = f(start + 1 , end , curr + 1 , k);
        return dp[start+1000][curr] = (left + right)%(mod);

    }
    int numberOfWays(int startPos, int endPos, int k) {
        
         
        memset(dp , -1 , sizeof dp);
        return f(startPos , endPos , 0 , k);
        
        
        
    }
};