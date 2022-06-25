class Solution {
public:
    vector<int> getRow(int n) {
        
        vector<int>prev , curr;
        prev.resize(1);
        prev[0] = 1;
        for(int i = 1 ; i < n+1 ; i++){
            curr.resize(i+1);
            curr[0] = curr[i] = 1;
            for(int j = 1 ; j < i ; j++){
                curr[j]  = prev[j-1] + prev[j];
            }
            prev = curr;
        }
        return prev;
        
    }
};