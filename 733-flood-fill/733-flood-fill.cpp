class Solution {
public:
    void dfs(int sr , int sc ,int color , int parent , vector<vector<int>>&image){
        
        int n = image.size() , m = image[0].size();
        // base check
        if(sr < 0 || sc < 0 || sr >= n || sc >= m || image[sr][sc] != parent){
            return;
        }
        
        // make the change
        
        image[sr][sc] = color;
        
        dfs(sr+1 , sc , color, parent , image);
        dfs(sr-1 , sc , color, parent , image);
        dfs(sr , sc+1 , color, parent , image);
        dfs(sr , sc-1 , color, parent , image);
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int n =  image.size() , m = image[0].size();
        
        if(image[sr][sc] == color) return image;
        
        dfs(sr , sc , color, image[sr][sc] , image);
        return image;
        
    }
};