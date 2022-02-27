class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        vector<vector<int>>res;
        if(n < 4){
            return res;
        }
        
        sort(nums.begin() , nums.end());
        
        
        
        for(int  i = 0 ; i < n ; i++)
        {
            int target_3 = target - nums[i];
            for(int j = i + 1 ; j < n ; j++)
            {
                int target_2 = target_3 - nums[j];
                
                int L = j+1;
                int R = n-1;
                
                while(L < R)
                {
                    int two_sum = nums[L] + nums[R];
                    
                    if(two_sum < target_2)L++;
                    else if(two_sum > target_2)R--;
                    else
                    {
                        vector<int>quad{nums[i] , nums[j] , nums[L] , nums[R]};
                        res.push_back(quad);
                        
                        int x = nums[L];
                        
                        while(L < R && x == nums[L]) L++;
                        
                        x = nums[R];
                                 
                        while(L < R && x == nums[R])R--;
                    }
                }
                int x = nums[j];
                
                while(j<n&&nums[j] == x)j++;
                j--; // bacause it is incrementing in for loop so 
                     //minus 1 takes it to its correct position 
                
            }
            int x = nums[i];
            
            while(i < n && x == nums[i]) i++;
            i--; // same as above
        }
        
        return res;
            
        
    }
};