class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       
        
        int n  = numbers.size();
        
        for(int i = 0 ; i< n ; i++){
            int x = target - numbers[i];
            
            int lo = i+1 , hi = n-1;
            
            while(lo <= hi){
                int mid = lo + (hi - lo)/2;
                if(numbers[mid] == x){
                    return {i+1 , mid+1};
                }
                else if(numbers[mid] > x) hi = mid-1;
                else lo = mid+1;
            }
        }
        return {};
       
    }
};