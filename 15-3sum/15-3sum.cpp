class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n = nums.size() ;
        
        if(n < 3){
            return {};
        }
        
        sort(nums.begin() , nums.end());
        
        vector<vector<int>>res;
        
        for(int i = 0 ; i < n ; i++)
        {
            int low = i + 1 , high = n-1 ,target = 0 - nums[i];
            
            while(low < high)
            {
                int sum = nums[low] + nums[high];
                if(sum < target){
                    low++;
                }
                else if(sum > target){
                    high--;
                }
                else{
                    vector<int>temp{nums[i] , nums[low] , nums[high]};
                    res.push_back(temp);
                    
                    int x = nums[low];
                    while(low < high && x == nums[low])
                    {
                        low++;
                    }
                    
                    x = nums[high];
                    
                    while(low < high && x == nums[high])
                    {
                        high--;
                    }
                    
                }
                
            }
            
            int x = nums[i];
            while(i < n && x == nums[i])
            {
                i+=1;
            }
            i -= 1;
        }
        
        return res;
    }
};