class Solution {
public:
    int bitwiseComplement(int num) {
        
        if(num < 0) return 0;
        if(num == 0) return 1;
        
        int res = 0, ind = 0;
        while(num > 0){
           
            if(!(num & 1))
            {
                res += (1 << ind );
            }
            ind++;
            num >>= 1;
            
        }
        return res;
    }
};