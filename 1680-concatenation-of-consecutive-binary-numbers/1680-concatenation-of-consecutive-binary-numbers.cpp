class Solution {
public:
    const int  mod = 1e9+7;
    int concatenatedBinary(int n) {
        
        string str = "";
        for(int i = n ; i >=1 ; i--){
            int num = i;
            // string s = "";
            while(num){
                str += ((num)%2 + '0');
                
                num >>= 1;
            }
            
        }
        
        long long ans = 0  , p = 1;
        for(int i = 0 ; i <=  str.size()-1 ; i++){
            long long curr = (str[i] - '0')*p;
            p *= 2;
            p %= mod;
            ans = (ans%mod + curr%mod)%mod;
        }
        return ans%mod;
        
    }
};