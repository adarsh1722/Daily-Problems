class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int>hashSet;
        for(auto x : nums)
        {
            hashSet.insert(x);
        }
        
        int longestStreak = 0;
        
        for(auto x : nums)
        {
            if(!hashSet.count(x - 1))
            {
                int currentNum = x;
                int currentStreak = 1;
                
                while(hashSet.count(currentNum + 1))
                {
                    currentNum += 1;
                    currentStreak += 1;
                }
                
                longestStreak = max(longestStreak , currentStreak);
            }
        }
        
        return longestStreak;
    }
};