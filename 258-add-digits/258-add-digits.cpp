class Solution {
public:
    int addDigits(int num) {
        
        // time :  O(n)
        // auxilliary : O(1*numbers of digits)
        
       if(num == 0) return 0;
       if(num % 9 == 0) return 9;
       return num%9;
        
        
        
    }
};