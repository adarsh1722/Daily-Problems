class Solution {
public:
    
    bool ispallendrome(string& s)
    {
        string x  = s;
        reverse(x.begin() , x.end());
        return x == s;
    }
    vector<vector<string>>res;
    
    void f(string& s , int start , int end , vector<string>contri)
    {
        // Base case
        
        if(start > end)
        {
            res.push_back(contri);
            return ;
        }
        
        // recursive step
        for(int i = start ; i <= end ; i++)
        {
            string prefix = s.substr(start , i-start+1);
            
            if(!ispallendrome(prefix)) continue;
            
            contri.push_back(prefix);
            f(s , i+1 , end , contri);
            contri.pop_back();
        }
    }
    vector<vector<string>> partition(string s) {
        
        vector<string>contri;
        
        f(s, 0 , s.size()-1 , contri);
        return res;
    }
};