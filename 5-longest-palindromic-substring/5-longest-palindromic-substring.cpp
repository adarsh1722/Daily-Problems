class Solution {
public:
    string longestPalindrome(string s) {
        
        int n = s.size();
        bool table[n][n];
        
        memset(table , 0 , sizeof table);
        
        int maxLength = 1;
        
        // one length ki substring ko mark kr do true
        for(int i = 0 ; i < n ; i++){
            table[i][i] = true;
        }
        
        int start = 0;
        
        // 2 length ki subtring ko mark kr d0
        for(int i = 0 ; i < n-1 ; i++){
            if(s[i] == s[i+1]){
                table[i][i+1] = true;
                start = i;
                maxLength = 2;
            }
        }
        // hr length ki try kro
        
        for(int k = 3 ; k <=  n ; k++){
            for(int i = 0 ; i < n-k+1 ; i++){
                
                int j = i + k-1;
                
                if(table[i+1][j-1] == true && s[i] == s[j]){
                    table[i][j] = true;
                    if(k > maxLength){
                        start = i;
                        maxLength = k;
                    }
                }
                
            }
        }
        
        string str = "";
        
        int i = start;
        
        for(int k = 0 ; k < maxLength ; k++){
            str += s[i++];
        }
        return str;
        
        
    }
};