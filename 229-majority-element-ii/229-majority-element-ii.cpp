class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int a , b , cnt1= 0  , cnt2  = 0, n = nums.size();
        
        for(int ele : nums)
        {
            if(ele  == a) cnt1++;
            else if(ele == b) cnt2++;
            else if(cnt1 == 0) a = ele ,cnt1++;
            else if(cnt2 == 0) b = ele ,cnt2++;
            else cnt1-=1 , cnt2-=1;
        }
        
        vector<int>ans;
        cnt1 = cnt2 = 0;
        
        for(auto x : nums)
        {
            if(x  == a) cnt1++;
            else if(x == b) cnt2++;
        }
        
        if(cnt1 > n/3)ans.push_back(a);
        if(cnt2 > n/3)ans.push_back(b);
        
        return ans;
        
    }
};