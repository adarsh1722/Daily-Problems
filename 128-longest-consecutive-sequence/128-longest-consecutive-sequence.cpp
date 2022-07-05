class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int>mp(nums.begin() , nums.end());
        
        int ans = 0;
        
        for(auto x : nums){
            
            if(!mp.count(x-1)){
                
                int cnt = 1;
                int currNum = x;
                while(mp.count(currNum+1)){
                    cnt += 1;
                    currNum += 1;
                }
                ans = max(ans , cnt);
                
            }
            
        }
        
        return ans;
        
    }
};