class Solution {
public:
    void dfs(vector<vector<int>>&graph , vector<bool>&visited , int start){
        visited[start] =  true;
        for(int i = 0 ; i < graph.size() ; i++){
            if(graph[start][i] && !visited[i]){
                dfs(graph , visited , i);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& graph) {
        
        int n = graph.size();
        vector<bool>visited(n , false);
        int provinces = 0;
        for(int i = 0 ; i  < n ; i++){
            if(!visited[i]){
                dfs(graph , visited , i);
                provinces++;
            }
        }
        return provinces;
        
    }
};