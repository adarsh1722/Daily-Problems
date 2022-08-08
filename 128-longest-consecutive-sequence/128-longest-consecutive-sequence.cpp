class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size() == 0){
            return 0;
        }
        
        set<int>st(nums.begin() , nums.end());
        nums.clear();
        nums = {st.begin() , st.end()};
        for(auto x : nums) cout << x << endl;
        int ans = 0  , cnt = 1;
        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i] -1 == nums[i-1]){
                cnt++;
            }
            else{
                ans =  max(ans , cnt);
                cnt = 1;
            }
        }
        ans =  max(ans , cnt);
        return ans;
        
        
        
    }
};