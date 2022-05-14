class Solution {
public:
    vector<bool>present_cycle;
    bool DFSRec(int s , vector<bool>&visited , vector<bool>&dfsVisited , vector<vector<int>>& graph){
        visited[s] = true;
        dfsVisited[s] = true;
        
        vector<int>data = graph[s];
        for(auto x : data){
            if(!visited[x]){
                if(DFSRec(x , visited , dfsVisited , graph)){
                    return present_cycle[s] = true;
                }
            }
            else if(visited[x] && dfsVisited[x]){
                return  present_cycle[s] =  true;
            }
        }
        
        dfsVisited[s] = false;
        return false;
        
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int>ans;
        int n = graph.size();
        present_cycle.resize(n);
        vector<bool>visited(n  , false) , dfsVisited(n , false);
        
        for(int i = 0 ; i < n  ;i++){
            
            if(!visited[i]){
                DFSRec(i , visited , dfsVisited , graph);
            }
            
        }
        
        for(int i = 0 ; i < n ; i++){
            if(!present_cycle[i])
                ans.push_back(i);
        }
        return ans;
        
    }
};