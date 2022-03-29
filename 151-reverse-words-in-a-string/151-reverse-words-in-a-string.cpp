class Solution {
public:
    string reverseWords(string s) {
        
        int n = s.size();
        
        stack<string>st;
        
        int start , end , i = 0;
        
        while(i < n && s[i] == ' '){
            i++;
        }
        
        start = i;
        i = n-1;
        while(i >= 0 && s[i] == ' '){
            i--;
        }
        
        end = i;
        s += " ";
        string str = "";
        for(int i = start ; i <= end + 1 ; i++)
        {
            if(s[i] == ' '){
                st.push(str);
                str = "";
                bool yes = false;
                while(i <= end + 1 && s[i] == ' '){
                    i += 1;
                    yes = true;
                }
                if(yes){
                    i -= 1;
                }
            }
            else{
                str += s[i];
            }
        }
        
        s = "";
        
        while(!st.empty()){
            s += st.top() + " ";
            st.pop();
        }
        s.pop_back();
        return s;
        
        
        
        
    }
};