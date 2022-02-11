class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        vector<int>s1Hash(26 , 0);
        vector<int>s2Hash(26 , 0);
        
        int s1Length = s1.length();
        int s2Length = s2.length();
        
        if(s1Length > s2Length)
        {
            return false;
        }
        
        int left = 0  ,right = 0 ;
        while(right < s1Length)
        {
            s1Hash[s1[right] - 'a'] += 1;
            s2Hash[s2[right] - 'a'] += 1;
            right++;
        }
        
        right -= 1;
        
        while(right < s2Length)
        {
            if(s1Hash == s2Hash)
                return true;
            
            right += 1;
            
            if(right != s2Length)
              s2Hash[s2[right] - 'a'] += 1;
            
             s2Hash[s2[left] - 'a'] -= 1;
            
            left += 1;
            
            
        }
        return false;
    }
};