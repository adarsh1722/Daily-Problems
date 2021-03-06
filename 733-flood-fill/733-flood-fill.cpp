class Solution {
public:
    void dfs(vector<vector<int>>& image , int sr , int sc , int sourceColor , int newColor){
        
        if(sr < 0 || sc < 0 || sr >= image.size() || sc >= image[0].size() || image[sr][sc] != sourceColor){
            return ;
        }
       
        image[sr][sc] = newColor;
        
        dfs(image, sr + 1, sc,  sourceColor, newColor);
        dfs(image, sr - 1, sc,  sourceColor, newColor);
        dfs(image, sr, sc + 1,  sourceColor, newColor);
        dfs(image, sr, sc - 1,  sourceColor, newColor);
        
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        if(image[sr][sc] == newColor){
            return image;
        }
     
        dfs(image , sr , sc, image[sr][sc] , newColor);
        return image;
        
    
    }
};