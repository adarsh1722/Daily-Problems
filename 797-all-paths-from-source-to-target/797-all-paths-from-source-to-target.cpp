class Solution {
public:
    void dfs(int source ,vector<vector<int>>& graph ,vector<vector<int>>&ans , vector<int>path , vector<int>&vis  ){
        path.push_back(source);
        vis[source] = 1;
        if(source == graph.size()-1){
            ans.push_back(path);
            // return;
        }
        
        for(auto it : graph[source]){
            
            if(!vis[it]){
                
                dfs(it , graph , ans , path ,vis);
                
            }
            
        }
        vis[source] = 0;
        
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
        int n = graph.size();
        vector<vector<int>>ans;
        vector<int>path , vis(n , 0);
        dfs(0 , graph , ans , path , vis);
        return ans;
        
    }
};