class Solution {
public:
    bool pallendrome(int i , int j , string &s){
        
        while(i < j){
            if(s[i] != s[j]) return false;
            i++ , j--;
        }
        return true;
    }
    int solve(int i ,int n ,string &s , vector<int>&dp){
        
        if(i == n) return 0;
        if(dp[i] != -1) return dp[i];
        int mini = INT_MAX;
        for(int j = i ; j < n  ; j++){
            if(pallendrome(i ,j , s)){
                int cost = 1 + solve(j+1 , n , s , dp);
                mini = min(mini , cost);
            }
        }
        
        return dp[i] = mini;
        
    }
    int minCut(string s) {
        // -1 kyunki ek partition vo last me kr rha h
        int n = s.size();
        vector<int>dp(n+1 , -1);
        return solve(0 , n , s , dp) -1;
    }
};