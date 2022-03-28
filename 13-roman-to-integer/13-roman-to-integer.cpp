class Solution {
public:
    int romanToInt(string s) {
        
        
        int n = s.size();
        int ans = 0;
        for(int i =  n - 1 ; i >= 0 ; i--)
        {
            if(i -1 >= 0){
                
                 if((s[i] == 'V' && s[i-1] == 'I')  )
                {
                    ans += 4;
                    i-=1;
                    continue;
                }
                else if(s[i] == 'X' && s[i-1] == 'I')
                {
                    ans += 9;
                    i-=1;
                     continue;
                }
                else if(s[i] == 'L' && s[i-1] == 'X')
                {
                    ans += 40;
                    i-=1; continue;
                }
                else if(s[i] == 'C' && s[i-1] == 'X')
                {
                    ans += 90;
                    i-=1; continue;
                }
                else if(s[i] == 'D' && s[i-1] == 'C')
                {
                    ans += 400;
                    i-=1; continue;
                }
                else if(s[i] == 'M' && s[i-1] == 'C')
                {
                    ans += 900;
                    i-=1; continue;
                }
                
            }
           
            if(s[i] == 'I') 
                ans += 1;
            if(s[i] == 'V')
                ans += 5;
            if(s[i] == 'X')
                ans += 10;
            if(s[i] == 'L') 
                ans += 50;
            if(s[i] == 'C')
                ans += 100;
            if(s[i] == 'D') 
                ans += 500;
            if(s[i] == 'M') 
                ans += 1000;
                
                
            
        }
        return ans;
        
    }
};