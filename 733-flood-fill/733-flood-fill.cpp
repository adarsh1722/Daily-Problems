class Solution {
public:
    void dfs(int sr , int sc , int color , int parent  , vector<vector<int>>&image  , int n , int m){
        
        // invalid boundary
        if(sr < 0 || sc < 0 || sr >= n || sr >= m ){
            return;
        }
        
        // invalid block
        if(image[sr][sc] != parent){
            return;
        }
        
        // make change
        
        image[sr][sc] = color;
        
        // dfs in 4 direction
        
        dfs(sr+1, sc ,  color , parent , image , n , m);
        dfs(sr-1 , sc , color , parent , image , n , m);
        dfs(sr ,sc+1, color , parent , image , n , m);
        dfs(sr ,sc-1, color , parent , image , n , m);
        
        
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        if(image[sr][sc] == color){
            return image;
        }
        int n = image.size() , m = image[0].size();
        
        int parent = image[sr][sc];
        dfs(sr , sc , color , parent , image, n , m);
        return image;
        
        
        
        
        
    }
};