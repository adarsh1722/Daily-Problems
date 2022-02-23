class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        
        int m = mat.size();
        int n = mat[0].size();
        
        vector<pair<int , int>>v;
        for(int i = 0 ; i < m ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                if(mat[i][j] == 0)
                {
                    v.push_back({i , j});
                }
            }
                
        }
        
        int sz = v.size();
        
        for(int k = 0 ; k < sz ; k++)
        {
            int row = v[k].first;
            int col = v[k].second;
            
            // make the row zeroe
            
            for(int j = 0; j < n ; j++)
                mat[row][j] = 0;
            
            // make the column zero
            for(int i = 0 ; i < m ; i++)
                mat[i][col] = 0;
                
            
        }
        
        
        
    }
};