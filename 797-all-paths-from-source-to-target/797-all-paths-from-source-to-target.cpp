class Solution {
public:
    void dfs(int source , vector<vector<int>>&graph,  vector<vector<int>>&ans ,vector<int>path, vector<int>&vis){
        vis[source] = true;
        path.push_back(source);
        if(source == graph.size() - 1){
            ans.push_back(path);
        }
        else{
            for(auto i : graph[source]){
                if(!vis[i]){
                    dfs(i , graph , ans , path , vis);
                }
            }
        }
        vis[source] = false;
        
        
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
        int n = graph.size();
        vector<vector<int>>ans;
        vector<int>path;
        vector<int>vis(n , false);
        dfs(0 , graph , ans , path ,  vis);
        return ans;
        
    }
};