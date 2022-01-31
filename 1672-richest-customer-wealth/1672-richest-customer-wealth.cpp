class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int ans=INT_MIN;
        
        for(auto x:accounts) {
            int sum=0;
            for(auto y:x) {
                sum += y;
            }
             ans= max(ans,sum);
        }
        
        return ans;
        
    }
};