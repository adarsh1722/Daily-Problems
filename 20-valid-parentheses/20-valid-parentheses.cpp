class Solution {
public:
    bool isValid(string s) {
        
        
        stack<char>st;
        
        for(auto  x : s){
            
            if(x == '(' || x == '{' || x == '['){
                st.push(x);
            }
            else{
                
                /* example -     ][] (unbalanced because one of one closing bracket at starting )
                                     stack will be empty */
                if(st.empty() == true){
                    return false;
                }
                
                if(x == '}' && st.top() != '{') return false;
                if(x == ']' && st.top() != '[') return false;
                if(x == ')' && st.top() != '(') return false;
                
                st.pop();
                
            }
                       
        }
        
        
        // Example - {}[({ (something like this where a opening bracket dont have  closing bracket)
        if(st.empty()) return true; // when stack is empty it means that we have balanced paranthesis 
        else return false;
      
        
    }
};