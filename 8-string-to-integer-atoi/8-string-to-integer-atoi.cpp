class Solution {
public:
    int myAtoi(string s) {
        
        int i = 0;
        while(i < s.size() && s[i] == ' ')i += 1; // white spaces
        
        if(i >= s.size())
        {
            return 0;
        }
        
               
        int sign = 1;
        
        if(s[i] == '+' || s[i] == '-') // sign
        {
            sign = s[i] == '+' ? 1 : -1;
            i++;
        }
        
        if(i >= s.size())
        {
            return 0;
        }
        
        int base = 0;
        
        for( ; i < s.length() && s[i] >='0' && s[i] <= '9' ;i++) // after words
        {
            if (base >  INT_MAX / 10 || (base == INT_MAX / 10 && s[i] - '0' > 7)) {
              if (sign == 1) return INT_MAX;
              else return INT_MIN;
            }
            base = base*10 + (s[i] - '0');
        }
        
        return sign*base;
        
    }
};