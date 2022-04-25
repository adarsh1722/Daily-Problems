class Solution {
public:
    void merge_sorted(int left , int mid , int right , vector<int>&nums , int& ans ){
        int i = left , j = mid+1;
        
        while(i <= mid && j <= right){
            if(nums[i] > (long)nums[j]*2){
                // dekhoge aage vale bhi same condition follow kr rhe h ki nhi
                ans += (mid - i + 1);
                j += 1;
            }
            else{
                i += 1;
            }
        }
        
        i = left , j = mid + 1;
        
        int k = 0 ;
        
        vector<int>temp(right - left+1);
        
        while(i <= mid && j <= right){
            if(nums[i] < nums[j]){
                temp[k++] = nums[i++];
                
            }
            else{
                temp[k++]  = nums[j++];
            }
        }
        
        while(i <= mid){
            temp[k++] = nums[i++];
        }
        
        while(j <= right){
            temp[k++] = nums[j++];
        }
        
        i= 0 , j = left;
        while(j <= right){
            nums[j++] = temp[i++];
        }
        
        
        
    }
    void merge_sort(int left , int right , vector<int>&nums , int& ans){
        
        if(left == right){
            return ;            
        }
        int mid = (left + right)/2;
        merge_sort(left , mid , nums , ans);
        merge_sort(mid+1 , right , nums ,ans);
        merge_sorted(left , mid , right , nums , ans);
    }
    int reversePairs(vector<int>& nums) {
        
        long long int n = nums.size();
        int ans = 0;
        merge_sort(0 , n-1 , nums ,ans);
        return ans;
        
        
        
    }
};