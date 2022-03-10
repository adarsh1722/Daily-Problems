class Solution {
public:
    bool isHappy(int n) {
        
        unordered_map<int , int>mp;
        while(n > 1){
            
            int sum = 0;
            while(n)
            {
                int r = n%10;
                sum += r*r;
                n /= 10;
            }
            
            if(mp.find(sum) != mp.end()) return false;
            mp[sum] = 1;
            n = sum;
            
        }
        return true;
        
        
    }
};