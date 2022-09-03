class Solution {
public:
    static bool cmp(string &s1 , string &s2){
        return s1.size() < s2.size();
    }
    bool check(string&s1, string &s2){
        if(s1.size() != s2.size() + 1) return false;
        int first = 0;
        int second = 0;
        while(first < s1.size()){
            if(s1[first] == s2[second]){
                first++;
                second++;
            }
            else{
                first++;
            }
        }
        if(first == s1.size() && second == s2.size()) return true;
        return false;
    }
    int longestStrChain(vector<string>& words) {
        
        sort(words.begin() , words.end(), cmp);
        
        int n = words.size();
        vector<int>dp(n , 1);
        int maxx = 1;
        for(int i = 0 ; i < n ; i++){
            
            for(int prev  = 0 ; prev < i ; prev++){
                
                if(check(words[i] , words[prev]) && 1 + dp[prev]> dp[i])
                {
                    dp[i] = 1 + dp[prev];
                }
            
            }
            
            if(dp[i] > maxx){
                maxx = dp[i];
            }
        }
        
        return maxx;
        
    }
};