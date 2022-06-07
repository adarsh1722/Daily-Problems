class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        // Approach : Using two Pointers
        // Space    : O(1)
        // time     : O( m + n );
           
        
        int i = m-1;
        int j = n-1;
        int k = m + n - 1;
        
        while(i >= 0 && j >= 0)
        {
            if(nums1[i] >  nums2[j])
            {
                nums1[k] = nums1[i];
                k -= 1;
                i -= 1;
            }
            else
            {
                nums1[k] =  nums2[j];
                k -= 1;
                j -= 1;
                
            }
        }
        while(i >= 0)
             nums1[k--] = nums1[i--];
        while(j>=0)
            nums1[k--] = nums2[j--];
            
        
        
    }
};