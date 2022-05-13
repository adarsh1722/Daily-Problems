class Solution {
public:
    int minReorder(int n, vector<vector<int>>& g) {
        
        vector<int>adj[n];
        set<pair<int , int>>st;
        for(int i = 0 ; i < g.size() ; i++){
            int a = g[i][0] , b = g[i][1];
            adj[a].push_back(b);
            adj[b].push_back(a);
            st.insert({a , b});
        }
        
        queue<int>q;
        q.push(0);
        
        vector<int>vis(n , 0);
        vis[0] = 1;
        
        int reverseEdges = 0;
        
        while(!q.empty()){
            
            int parent = q.front();
            q.pop();
            
            for(auto nbr : adj[parent]){
                
                if(!vis[nbr]){
                    
                    vis[nbr] = 1;
                    q.push(nbr);
                    if(st.count({parent , nbr})){
                        reverseEdges++;
                    }
                    
                }
                
            }
            
        }
        
        return reverseEdges;
        
    }
};