class Solution {
public:
    vector<string>ans;
    unordered_map<string , int>ump;
    int getmin(string s){
        stack<char> stck;
        int i = 0;
        while(i < s.size())
        {
            if(s[i] == '(')
                stck.push('(');
            else if(s[i] == ')')
            {
                if(stck.size() > 0 && stck.top() == '(')
                    stck.pop();
                else
                    stck.push(')');
            }
            i++;
        }
        return stck.size();
    }
    void solve(string s , int minInv){
        if(ump[s] != 0) return;
        else ump[s]++;
        if(minInv == 0){
            if(getmin(s) == 0){
                ans.push_back(s);
                return;
            }
        }
        for(int i = 0 ; i < s.size() ; i++){
            string left = s.substr(0 , i);
            string right = s.substr(i+1);
            solve(left + right , minInv-1);
        }
    }
    vector<string> removeInvalidParentheses(string s) {
        
        int minInv = getmin(s);
        solve(s , minInv);
        return ans;
    }
};