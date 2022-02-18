class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int n = nums.size();
        int i = 0 , j = 0 , k = n-1;
        
        // i marks the territory of the 0 
        // j checks whether the current element is 0 , 1 or 2
        // k marks the territory of the 2
        while(j <= k)
        {
            if(nums[j] == 0)
            {
                swap(nums[i] , nums[j]);
                i++;
                j++;
                
            }
            else if(nums[j] == 2)
            {
                swap(nums[j] , nums[k]);
                k--;
            }
            else
            {
                j+=1;
            }
        }
        
    }
};