class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        
        int i  = 0  , j = n-1;
        
        while(i < m && j >= 0){
            
            if(matrix[i][j] == target) return true;
            else if(matrix[i][j] > target) j--; // decrease column
            else i++; // increase row
                       
        }
        return false;
    }
};