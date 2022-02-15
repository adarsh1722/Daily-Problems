class Solution {
public:
    int singleNumber(vector<int>& nums) {
      
        // Approach : using XOR of all numbers because a^a = 0 and a^0 = a
        // space    : O(1)
        // Time     : O(n)
        
      int ans = 0;
      for(auto x : nums)
          ans ^= x;
      
     return ans;
        
      
    }
};