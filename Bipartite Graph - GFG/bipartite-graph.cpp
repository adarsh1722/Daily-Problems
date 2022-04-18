// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    bool bfs(int parent , int c , vector<int>adj[] , vector<int>&color){
        
        queue<pair<int , int>>q;
        q.push({parent , 0});
        color[parent] = 0;
        
        while(!q.empty()){
            
            int parent = q.front().first;
            int c = q.front().second;
            q.pop();
            
            for(auto nbr: adj[parent]){
                
                if(color[nbr] == -1){
                    
                    color[nbr] = c^1;
                    q.push({nbr , c^1});
                    
                }
                else if(color[nbr] == color[parent]){
                    return false;
                }
                
                
            }
            
            
        }
        return true;
        
        
    }
    
	bool isBipartite(int V, vector<int>adj[]){
	    
	    vector<int>color(V+1 , -1);
	    
	    for(int i = 0 ; i < V ; i++){
	        
	        if(color[i] == -1 && bfs(i , 0 , adj , color) == false){
	            return false;
	        }
	        
	    }
	    return true;
	    
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends