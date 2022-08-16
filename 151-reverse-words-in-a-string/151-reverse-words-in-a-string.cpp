class Solution {
public:
    string reverseWords(string s) {
        
        reverse(s.begin() , s.end());
        
        stringstream str(s);
        
        string word , ans;
        int spaces = 0;
        while(str >> word){
            
            string temp = word;
            if(temp != " "){
                reverse(temp.begin() , temp.end());
                if(ans.size() > 0) ans += " "; 
                ans += temp;
            }
           
        }
        return ans;
        
        
    }
};