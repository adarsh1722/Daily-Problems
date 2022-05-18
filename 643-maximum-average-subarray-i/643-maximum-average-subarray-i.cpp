class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        double sum=0, res=INT_MIN;
        int i = 0 ;
        while(i < k){
            sum += nums[i];
            i+=1;
        }
        int low = 0 ;
        while(i < nums.size()){
           res = max(res ,sum);
           sum -= nums[low++];
           sum += nums[i++];
        
                    
        }
        // cout << sum << endl;
        res = max(res , sum);
        return res/k;
    }
};