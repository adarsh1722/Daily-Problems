class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        
        unordered_map<string, int>hash;
        
        for(auto x : words1)
            hash[x] += 1;
        
        for(auto x : words2)
        {
            if(hash[x] < 2)
                hash[x]-=1;
        }
        
        int cnt = 0 ;
        
        for(auto x : hash)
            if(x.second == 0)
                cnt++;
        
        return cnt;
        
    }
};