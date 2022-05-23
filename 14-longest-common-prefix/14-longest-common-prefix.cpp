class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int n = strs.size();
        int len = INT_MAX;
        for(auto x : strs){
            len  = min(len , (int)x.size());
        }
        
        string ans = "";
        for(int i = 0 ; i < len ; i++){
            bool found  = true;
            
            for(int j = 0 ; j < n ; j++){
                if(strs[j][i]  != strs[0][i]){
                    found = false;
                    break;
                }
            }
            
            if(!found) break;
            
            ans += strs[0][i];
            
        }
        
        return ans;
        
        
    }
};