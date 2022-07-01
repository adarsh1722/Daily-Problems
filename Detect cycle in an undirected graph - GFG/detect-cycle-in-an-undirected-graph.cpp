// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool f(int node , int parent , vector<int>adj[] , vector<int>&vis ){
      
      
       queue<vector<int>>q;
        q.push({node , parent});
        vis[node] = 1;
        
        while(!q.empty()){
            auto v = q.front();
            q.pop();
            int child = v[0];
            int parent = v[1];
            
            for(auto nbr : adj[child]){
                if(vis[nbr] == 0){
                    q.push({nbr , child});
                    vis[nbr] = 1;
                }
                else if(nbr != parent) return true;
            }
            
        }
        return false;
      
  }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        
        vector<int>vis(V+1);
        for(int i = 0 ; i < V ; i++){
            if(!vis[i] && f(i , -1 , adj , vis)) return true;
        }
        return false;
        
        
        
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends