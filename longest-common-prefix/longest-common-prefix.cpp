class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
       string ans = "";
        
       int m = INT_MAX;
        
      for(int i = 0 ; i < strs.size() ; i++)
      {
          int len = strs[i].size();
          m = min(m, len);
      }
        
        bool flag = true;
        for(int i = 0 ; i < m ; i++)
        {
            int cnt = 0 ;
            for(int j = 0 ; j < strs.size() ; j++)
            {
                if(strs[j][i] == strs[0][i])
                {
                    cnt+=1;
                }
                else
                {
                    break;
                }
            }
            if(cnt != strs.size()) 
            {
                // flag = false;
                break;
            }
            ans += strs[0][i];
        }
        
        // if(!flag) return "";
        return ans;
        
        
        
    }
};