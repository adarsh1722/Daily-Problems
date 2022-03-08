class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int p1 = -1 , p2 = 0 , cnt=0;
        while(p2 < n )
        {
            if(nums[p2] != 0)
            {
                p1++;
                nums[p1] = nums[p2];
                p2++;
            }
            else
            {
                cnt++;
                p2++;
            }
        }
        while(cnt--)
        {
            nums[++p1] = 0;
        }
        
    }
};