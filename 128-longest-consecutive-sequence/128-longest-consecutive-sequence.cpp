class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int>st(nums.begin() ,nums.end());
        int ans = 0 , n = nums.size();
        
        for(int i = 0 ; i < n ; i++){
            
            if(!st.count(nums[i]-1)){
                
                int currentNum = nums[i] , currentStreak = 1;
                
                while(st.count(currentNum + 1)){
                    currentStreak += 1;
                    currentNum += 1;
                }
                
                ans = max(ans , currentStreak);
                
            }
            
        }
        
        return ans;
        
        
    }
};