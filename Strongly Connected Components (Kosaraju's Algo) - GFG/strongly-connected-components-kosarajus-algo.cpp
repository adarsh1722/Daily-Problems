// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
	void dfs(int parent , vector<int>adj[] , vector<int>&vis ,stack<int>&st){
	    vis[parent] = 1;
	    for(auto nbr :adj[parent]){
	        if(!vis[nbr]){
	            dfs(nbr , adj , vis ,st);
	        }
	    }
	    st.push(parent);
	}
	void dfs2(int parent , vector<int>transpose[] , vector<int>&vis ){
	    vis[parent] = 1;
	    for(auto nbr :transpose[parent]){
	        if(!vis[nbr]){
	            dfs2(nbr , transpose , vis);
	        }
	    }
	   
	}
	
	//Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<int> adj[])
    {
       stack<int>st;
       vector<int>vis(V);
       // find topo sort
       for(int i = 0 ; i < V ; i++){
           if(!vis[i]){
               dfs(i , adj , vis ,st);
               
           }
       }
       
       // reverse the edges
       vector<int>transpose[V];
       for(int i = 0 ; i < V ; i++){
           vis[i] = 0;
           for(auto nbr : adj[i]){
               transpose[nbr].push_back(i);
           }
       }
       
       int SCC = 0;
       while(!st.empty()){
           int curr = st.top();
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