class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<int>mp(256 , -1);
        int length = 0 ,left = 0 ,right = 0 , n = s.size();
        
        while(right < n){
            
            if(mp[s[right]] != -1){
                left = max(left , mp[s[right]] + 1);
            }
            
            length = max(length , right - left + 1);
            
            mp[s[right]] = right;
            right += 1;
            
        }
        return length;
        
    }
};