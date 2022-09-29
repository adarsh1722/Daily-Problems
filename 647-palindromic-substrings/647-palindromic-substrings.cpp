class Solution {
public:
    int countSubstrings(string s) {
        
        int n = s.size();
        bool table[n][n];
        
        memset(table , 0 , sizeof(table));
        
       int count = 0;
       for(int i = 0 ; i < n ; i++){
           table[i][i] = true;
           count++;
       }
       
       for(int i = 0 ; i < n-1 ; i++){
           if(s[i] == s[i+1]){
               table[i][i+1] = true;
               count++;
           }
       }
        
       for(int k = 3 ; k <= n ; k++ ){
          
          for(int i = 0 ; i < n - k + 1; i++){
              
              int j = i + k - 1;
              
              if(table[i+1][j-1] == true && s[i] == s[j] ){
                  table[i][j] = true;
                  
                  count++;
                  
              }
              
          }
          
       }
        
        return count;
     
        
    }
};