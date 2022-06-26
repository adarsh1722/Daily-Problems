class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        set<int>st(nums.begin() , nums.end());
        vector<int>temp(st.begin(),st.end());
        
        int ans = 0 , len = 1;
        for(int i = 0 ; i < temp.size()-1 ; i++){
            if(temp[i] +1 == temp[i+1]){
                len+=1;
            }
            else{
                ans = max(ans , len);
                len  = 1;
            }
        }
        ans = max(ans , len);
        return ans;
    }
};