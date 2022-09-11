class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& arr, int n) {
        
        vector<int>prefix(n+1);
        for(auto x : arr){
            int L = x[0]-1  , R = x[1]-1 , value = x[2];
            prefix[L] += value;
            prefix[R+1] -= value;
        }
        
        for(int i = 1 ; i <= n ; i++){
            prefix[i] = prefix[i] + prefix[i-1]; 
        }
        prefix.resize(n);
        return prefix;
        
        
        
        
    }
};