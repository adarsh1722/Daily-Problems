class NumMatrix {
public:
    vector<vector<int>>prefixsum;
    NumMatrix(vector<vector<int>>& a) {
        
        int m = a.size();
        int n = a[0].size();
            
        prefixsum = vector<vector<int>>(m , vector<int>(n , 0));
        
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                prefixsum[i][j] = a[i][j];
                if(j-1 >= 0) prefixsum[i][j] += prefixsum[i][j-1];
                if(i-1 >= 0) prefixsum[i][j] += prefixsum[i-1][j];
                if(i-1 >= 0 && j-1 >= 0) prefixsum[i][j] -= prefixsum[i-1][j-1];
            }
        }
        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        
        int sum = prefixsum[row2][col2];
        if(row1-1 >= 0)
            sum -= prefixsum[row1-1][col2];
        if(col1-1 >= 0)
            sum -= prefixsum[row2][col1-1];
        if(row1-1 >= 0 && col1-1 >= 0)
            sum += prefixsum[row1-1][col1-1];
        
        return sum;
        
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */