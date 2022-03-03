class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int p1  , p2  , n = nums.size();
        p1 = 0 , p2 = 1;
        while(p2 < n)
        {
            if(nums[p1] == nums[p2]){
                p2 += 1;
            }
            else{
                p1 +=1;
                swap(nums[p1] , nums[p2] );
                p2 += 1;
            }
        }
        
        return p1 + 1; // because of 0 based-indexing 
        
    }
};