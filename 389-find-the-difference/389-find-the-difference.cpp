class Solution {
public:
    char findTheDifference(string s, string t) {
        
        if(s.size() == 0){
            return t[0];
        }
       
        
        char res ;
      
        int i = 0;
        res = s[0]^t[0];
        i+=1;
        while (i < s.size()){
            res = res^s[i]^t[i];
            i+=1;
            
        }
        res = res^t[i];
        return res;
        
        
    }
};