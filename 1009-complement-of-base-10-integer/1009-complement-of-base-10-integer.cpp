class Solution {
public:
    int bitwiseComplement(int num) {
        
        if(num < 0) return 0;
        if(num == 0) return 1;
        
        int res = 0, ind = 0;
        while(num > 0){
            //find single digit from low to high significance
            int digit = num % 2; 
            int flippedDigit = (digit == 1? 0 : 1); // flip digit
            res += (flippedDigit << ind);
            num /= 2;            
            ind++;
        }
        return res;
    }
};