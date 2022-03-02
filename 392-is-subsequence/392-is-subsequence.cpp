class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int j = 0;
        for(int i = 0 ; i < t.size() ; i++){
            
            if(j < s.size() && s[j] == t[i]){
                j+=1;
            }
            
        }
        return j == s.size();
        
    }
};