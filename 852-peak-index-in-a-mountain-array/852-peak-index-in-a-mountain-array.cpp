class Solution {
public:
    int poss(int mid , vector<int>&arr){
        return arr[mid] > arr[mid+1];
    }
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int n = arr.size();
        int low = 0 , high = n-1 , ans = 0 ;
        while(low < high){
            int mid = low + (high - low)/2;
            if(poss(mid , arr)){
                ans = mid;
                high = mid;
            }
            else{
                low = mid + 1;
            }
            
            
        }
        return ans;
        
        
    }
};