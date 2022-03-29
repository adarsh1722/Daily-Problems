class Solution {
public:
    static bool cmp(int a , int b)
    {
        string x = to_string(a) , y = to_string(b);
        return x + y > y + x;
    }
    string largestNumber(vector<int>& nums) {
        
        sort(nums.begin() , nums.end() , cmp);
        
        if(nums[0] == 0)
        {
            return "0";
        }
        
        string ans = "";
        
        for(auto x : nums)
            ans += to_string(x);
        
        return ans;
        
    }
};