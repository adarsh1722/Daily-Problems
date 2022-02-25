class Solution {
public:
    int majorityElement(vector<int>& nums) {
       
        int n = nums.size();
        int majority = 0;
        int count = 0;
        for(int i = 0 ; i  < n ; i++)
        {
            if(count == 0){
                majority = nums[i];
                count += 1;
                continue;
            }
            
            count += (majority == nums[i]) ? 1 :-1;
        }
        
        return majority;
        
    }
};