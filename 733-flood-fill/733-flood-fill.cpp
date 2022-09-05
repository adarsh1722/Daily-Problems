class Solution {
public:
    void dfs(int sr , int sc , int parent  , int n , int m ,vector<vector<int>>& image , int color){
        
        // invalid case
        if(sr < 0 || sc < 0 || sr >= n || sc >= m || image[sr][sc] != parent) return ;
        
        // make change
        
        image[sr][sc] = color;
        
        // do dfs in 4- direction
        dfs(sr+1 , sc  , parent , n , m , image , color);
        dfs(sr-1 , sc , parent , n , m ,image , color);
        dfs(sr , sc-1 , parent , n ,  m ,image , color);
        dfs(sr , sc+1 ,parent , n , m ,image ,color);
        
        
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        if(image[sr][sc] == color) return image;
        int n = image.size() , m = image[0].size();
        dfs(sr , sc , image[sr][sc] , n , m ,image , color);
        return image;
        
    }
};