class Solution {
public:
    stack<char> check(string s){
        
        stack<char>st;
        
        for(auto x : s){
            
            if(x == '#'){
                if(st.empty() == true){
                    continue;
                }
                st.pop();
                
            }
            else{
                st.push(x);
            }
            
            
        }
        
        return st;
        
        
    }
    bool backspaceCompare(string s, string t) {
        
        return check(s) == check(t);
        
        
    }
};