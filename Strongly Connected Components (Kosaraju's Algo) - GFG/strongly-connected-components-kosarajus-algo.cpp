// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
	void dfs(int node  , vector<int>adj[] , vector<int>&vis , stack<int>&st){
	    vis[node] = 1;
	    for(auto nbr: adj[node]){
	        if(vis[nbr] == 0){
	            dfs(nbr , adj , vis , st);
	        }
	    }
	    st.push(node);
	}
	void dfs2(int node , vector<int>adj[] , vector<int>&vis){
	    vis[node] = 1;
	    for(auto nbr : adj[node]){
	        if(!vis[nbr]){
	            dfs2(nbr , adj , vis);
	        }
	    }
	}
	//Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<int> adj[])
    {
        //code here
       
        // 1. Do toposort
        stack<int>st;
        vector<int>vis(V);
        
        for(int i = 0 ; i < V ; i++){
            if(!vis[i]){
                dfs(i , adj , vis , st);
            }
        }
        
        // 2. reverse edges
        vector<int>transpose[V];
        
        for(int i = 0 ; i < V ; i++){
            vis[i] = 0;
            for(auto child : adj[i]){
                transpose[child].push_back(i);
            }
        }
        
        //3. do dfs
        int SCC = 0;
        while(!st.empty()){
            int curr  = st.top();
            st.pop();
            if(vis[curr] == 0){
                dfs2(curr , transpose , vis);
                SCC++;
            }
        }
        return SCC;
    }
};

// { Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}

  // } Driver Code Ends