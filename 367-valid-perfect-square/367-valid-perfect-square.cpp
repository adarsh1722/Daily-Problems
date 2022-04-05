class Solution {
public:
   
    bool isPerfectSquare(int num) {
        
        int low = 1, high = num , ans = 1;
        
        while(low < high){
        
            int mid = low + (high - low)/2;
            
            if(mid >= num/mid)
            {
                ans = mid;
                high  = mid;
            }
            else{
                low = mid+1;
            }
            
        }
        return ans == num/ans && (num%ans == 0);
        
    }
};