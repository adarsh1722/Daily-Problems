class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int ans = 0;
        for(int i = 0 ; i < 32 ; i++){
            int count = 0;
            for(auto &num : candidates){
                count += (num >>i)&1;
            }
            ans = max(ans , count);
            
        }
        return ans;
    }
};