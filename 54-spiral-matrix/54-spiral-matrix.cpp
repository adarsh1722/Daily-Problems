class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        
        int n = mat.size();
        int m = mat[0].size();
        vector<int>ans;
        
        int top = 0 , bottom = n-1 , left = 0  , right = m-1;
        
        while(top <= bottom && left <= right){
            
            // top 
            
            for(int i = left ; i <= right ; i++){
                ans.push_back(mat[top][i]);
            }
            
            // right 
            
            for(int i = top+1 ; i <= bottom ; i++){
                ans.push_back(mat[i][right]);
            }
            
            if(top != bottom){
                
                for(int i = right -1 ;i >= left ; i--){
                    ans.push_back(mat[bottom][i]);
                }
            }
            if(left != right){
                for(int i = bottom-1 ; i > top ; i--){
                    ans.push_back(mat[i][left]);
                }
            }
            
            top++ , left++ , right-- , bottom--;
            
        }
        return ans;
        
    }
};