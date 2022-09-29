class Solution {
public:
    string longestPalindrome(string s) {
        
        int n = s.size();
        bool table[n][n];
        
        memset(table , false , sizeof table);
        
        int maxLength = 1;
        
        // check of size 1
        for(int i = 0 ; i < n ; i++){
            table[i][i] = true;
        }
        
        int start = 0;
        
        // check for size 2
        for(int i = 0 ; i <  n-1 ; i++){
            if(s[i] == s[i+1]){
                table[i][i+1] = true;
                start = i;
                maxLength = 2;
            }
        }
        
        // check for every size of k from 3 to n
        for(int k = 3 ; k <= n ; k++){
            for(int i = 0 ; i <= n-k ; i++){
                
                int j = i + k-1;
                
                if(table[i+1][j-1] && s[i] == s[j]){
                    table[i][j] = true;
                    
                    if(k > maxLength){
                        start = i;
                        maxLength = k;
                    }
                }
            }
            
        }
        
        string str = "";
        
        int i  = start;
        
        for(int k = 0 ; k < maxLength ; k++){
            str += s[i+k];
        }
        
        return str;
        
        
        
    }
};