class Solution {
public:
    vector<int>adj[100005];
    int dfs(int headID , vector<int>&informTime){
        
        int maxPath = 0;
        
        for(auto it : adj[headID]){
            int res = dfs(it , informTime);
            maxPath = max(maxPath  , res);
        }
        
        return maxPath + informTime[headID];
        
        
    }
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        
        
        
        for(int  i = 0 ; i < manager.size() ; i++){
            if(manager[i] != -1)
             adj[manager[i]].push_back(i);
            
        }
        // int maxTime = 0;
        return dfs(headID ,informTime);
        
        
    }
};