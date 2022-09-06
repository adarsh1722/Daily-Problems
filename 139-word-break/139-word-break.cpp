class Solution {
public:
    map<string , int>mp;
    bool solve(int start , int curr , int n , string &s , vector<vector<int>>&dp){
        
        if(curr == n) return mp[s.substr(start , curr - start)];
        
        if(dp[start][curr] != -1) return dp[start][curr];
        int nottake = solve(start , curr+1  , n , s , dp);
        bool check = mp[s.substr(start , curr - start+1 )];
        int take = check && solve(curr+1 , curr+1 , n , s , dp);
        
        return dp[start][curr] =  take || nottake;
       
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        
        // mp[""] = 1;
        for(auto  it : wordDict){
            mp[it] = 1;
        }
        int n = s.size();
        vector<vector<int>>dp(n+1 , vector<int>(n+1,-1));
        return solve(0 ,0 , n , s , dp);
    }
};