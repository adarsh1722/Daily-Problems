class Solution {
public:
    int minimumXORSum(vector<int>& a, vector<int>& b) {
        
     
        int n = b.size();
     
        
        vector<int> dp(1<<n);
        
        for(int i=1; i<(1<<n); i++) {
            
           
            vector<int> nums;
            for(int j=0; j<n; j++)
                if(i&(1<<j))
                    nums.push_back(b[j]);
            
            int N = nums.size();
            
          
            int local = 0;
            for(int j=0; j<N; j++)
                local += (nums[j] ^ a[j]);
            
           
            dp[i] = local;
            
           
            int val = a[N-1];
            
           
            
            int cnt = 0;
            for(int j=0; j<n; j++)
                if(i&(1<<j)) {
                    int rmv = (i ^ (1<<j)); 
                    int temp = dp[rmv] + (nums[cnt]^val); 
                    cnt++;
                    dp[i] = min(dp[i], temp);
                }
        }

       
        return dp[(1<<n)-1];
        
    }
};