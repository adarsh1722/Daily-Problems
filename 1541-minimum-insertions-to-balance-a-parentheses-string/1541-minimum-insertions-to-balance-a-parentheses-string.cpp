class Solution {
public:
    int minInsertions(string s) {
        
        stack<char>st;
        int count = 0;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i] == '('){
                st.push('(');
            }
            else{
                
                if(i != s.size() -1){
                    if(s[i + 1] == ')'){
                        
                        if(st.empty()){
                            count+=1;
                        }
                        else{
                            st.pop();
                        }
                        i+=1;
                    }
                    else{
                        count+=1;
                        if(st.empty()){
                            count+=1;
                        }
                        else{
                            st.pop();
                        }
                    }
                }
                else{
                    
                    count+=1;
                    if(st.empty()){
                        count+=1;
                    }
                    else{
                        st.pop();
                    }
                    
                }
                
                
            }
        }
        
        count += 2*st.size() ;
        return count;
        
    }
};