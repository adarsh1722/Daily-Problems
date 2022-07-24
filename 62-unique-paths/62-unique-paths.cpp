class Solution {
public:
    int uniquePaths(int m, int n) {
       vector<int>prev(n , 0);
       for(int i = 0 ; i < m ; i++){
           vector<int>temp(n , 0);
           for(int j = 0 ; j < n ; j++){
               if(i == 0 && j == 0) temp[j] = 1;
               else{
                   temp[j] = prev[j] + (j > 0? temp[j-1] : 0);
               }
           }
           prev = temp;
           
       }
        
       return prev[n-1];
    }
};