class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int n = nums.size();
        int i = 0 , j = n-1;
        while(i <= j){
            if(nums[i] > 0){
                i++;
                continue;
            }
            swap(nums[i] , nums[j]);
            j--;
        }
        
        // j represent kr rha h ki kitni 
        int sz = j + 1 ;
        
        // nums[i] -> nums[i]-1
        for(int i = 0 ; i< sz ; i++){
            if(abs(nums[i]) > sz){
                continue;
            }
            if(nums[abs(nums[i]) - 1] > 0){
                nums[abs(nums[i]) - 1] *= -1;
            }
        }
        
        for(int i = 0;  i < sz ; i++){
            if(nums[i] > 0) return i+1;
        }
        return sz+1;
        
    }
};