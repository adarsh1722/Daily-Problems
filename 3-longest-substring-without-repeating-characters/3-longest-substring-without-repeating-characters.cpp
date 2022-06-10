class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n = s.size() , maxLen = 0;
        for(int i = 0 ; i  < n ; i++){
            set<char>st;
            int len = 0;
            for(int j = i ; j < n ; j++){
                if(st.find(s[j]) != st.end()){
                    break;
                }
                len++;
                maxLen = max(maxLen , len);
                st.insert(s[j]);
                
            }
            
        }
        
        return maxLen;
        
    }
};