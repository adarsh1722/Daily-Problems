class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        vector<int>result;
        for(auto x : matrix){
            for(auto y : x){
                result.push_back(y);
            }
        }
        sort(result.begin() , result.end());
        return result[k-1];
        
    }
};