class Solution {
public:
    long long int poss(long long int mid){
        return (mid*(mid+1))/2;
    }
    int arrangeCoins(int n) {
        
        
        int lo = 1 , hi = n , ans = 0;
        
        while(lo <= hi){
            
            long long int mid = lo + (hi - lo)/2;
            
            if(poss(mid) <= n){
                ans = mid;
                lo = mid+1;
            }
            else{
                hi = mid-1;
            }
            
            
            
            
        }
        return ans;
        
        
        
        
        
    }
};