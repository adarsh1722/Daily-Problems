class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        
        
        vector<vector<int>>temp(n, vector<int>(n , 0));
        
        for(int i = n-1 ; i >= 0 ; i--)
        {
            for(int j = 0 ; j < n ; j++)
            {
                temp[j][ n- 1 -i] = matrix[i][j];
            }
        }
        
        for(int  i = 0 ; i < n ; i++)
        {
            for(int j = 0; j < n ; j++)
            {
                matrix[i][j] = temp[i][j];
            }
        }
        
        
       
        
        
    }
};