class Solution {
public:
    int minimumTotal(vector<vector<int>>& a) {
        int n = a.size();
        vector<int>front(n,0);
        for(int j = 0 ; j < n ; j++){
            front[j] = a[n-1][j];
        }
        
        for(int i= n-2 ; i>= 0; i--){
            
            vector<int>curr(n ,  0);
            for(int j = i ; j>=0 ;j--){
                int d = a[i][j] + front[j];
                int dig = a[i][j] + front[j+1];
                curr[j] = min(d , dig);
            }
            front = curr;
            
        }
        return front[0];
    }
};