class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin() , nums.end()); // sort
        vector<vector<int>>res; // for storing result
        int n = nums.size(); // get the size of the array
        if(n < 3){
            return res;
        }
        for(int i = 0 ; i < n ; i++){
            
            int target = 0 - nums[i];
            
            int j = i+1  , k = n-1;
            while(j < k){
                
                int sum =  nums[j] + nums[k];
                if(sum  == target){
                    vector<int>temp = {nums[i] , nums[j] , nums[k]};
                    res.push_back(temp);
                    
                    int x = nums[j];
                    while(j < k && x == nums[j])j++;
                    x = nums[k];
                    while(j < k && x == nums[k])k--;
                    
                    
                }
                else if(sum > target) k--;
                else j++;
                
            }
            int x = nums[i];
            while(i <n && x ==nums[i])i++;
            i -= 1;
            
        }
        
        return res;
        
    }
};