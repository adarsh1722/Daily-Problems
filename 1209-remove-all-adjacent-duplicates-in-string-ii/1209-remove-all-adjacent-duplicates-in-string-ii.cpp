class Solution {
public:
    string removeDuplicates(string s, int k) {
        
        vector<pair<int , char>> st = {{0 , '#'}};
        for(auto c : s){
            if(st.back().second != c){
                st.push_back({1 , c});
            }
            else if(++st.back().first == k){
                st.pop_back();
            }
        }
        
        string res;
        
        for(auto &p : st){
            int cnt = p.first;
            while(cnt--){
                res += p.second;
            }
        }
        return res;
        
    }
};