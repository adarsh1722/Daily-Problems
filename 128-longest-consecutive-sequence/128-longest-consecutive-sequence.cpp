class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int>hashSet(nums.begin() , nums.end());
        int longestStreak = 0 ;
        for(auto x : nums){
            if(!hashSet.count(x-1)){
                int currentNum = x  , currentStreak = 1;
                while(hashSet.count(currentNum + 1)){
                    currentNum += 1;
                    currentStreak += 1;
                }
                longestStreak = max(longestStreak , currentStreak);
            }
        }
        return longestStreak;
        
    }
};