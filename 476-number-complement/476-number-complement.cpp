class Solution {
public:
    int findComplement(int num) {
        
        int res = 0 , ind = 0;
        
        while(num > 0)
        {
            int digit = num%2 ;
            int flipped = (digit == 1? 0 : 1);
            
            res += flipped << ind;
            num /= 2;
            ind++;
        }
        return res;
        
        
        
        
        
    }
};