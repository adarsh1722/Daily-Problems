class Solution {
public:
    string countAndSay(int n) {
        
        if(n == 1) {
            return "1";
        }
        if(n == 2){
            return "11";
        }
        
        string s = "11";
        
        for(int i = 3 ; i <= n ; i++ )
        {
            
            string t = "";
            s = s+'@';  /* ye ek ending ko mark krta h taaki hme loop ke bahr baad me add
            na krna pde count or number ko jiska cout h */
            int count = 1;
            
            for(int j = 1 ; j < s.length() ;j++){
                if(s[j] != s[j-1]){
                    t = t + to_string(count);// add the count
                    t = t+s[j-1] ;// add the number whose the count was added
                    count = 1;
                }
                else {
                    count++;
                }
            }
            
            s = t;
        }
        
        return s;
        
    }
};