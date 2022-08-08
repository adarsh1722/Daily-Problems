class Solution {
public:
    bool isPerfectSquare(int num) {
        
        int low =1 , high = num;
        
        int ans = -1;
        while(low <= high){
            long long int mid = low + (high - low)/2;
            if(mid == num/mid){
                ans = mid;
                break;
            }
            else if(mid*mid > num){
                high = mid-1;
            }
            else low = mid+1;
        }
        return num/ans == ans && num%ans == 0;
        
    }
};