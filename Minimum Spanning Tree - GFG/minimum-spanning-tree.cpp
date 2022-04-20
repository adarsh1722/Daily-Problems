// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // it will store the cost/weight of every edge from its
        // parent
        int key[V];
        // it will tell us wether the particular Node is the
        // part of the mst or not
        int mst[V];
        // it will tell us who is the parent of the particular node 
        // basically - {i - index } = a[i] , here i is the node
        // and a[i] is the parent of that node
        int parent[V];
        
        for(int i = 0 ; i  < V ; i++){
            key[i] = INT_MAX;
            mst[i] = false;
           
        }
        priority_queue<pair<int , int> , vector<pair<int ,int>> , greater<pair<int ,int>>>pq;
        // pq is - {weight  , node}
        
        key[0] = 0;
        parent[0] = -1;
        
        
        pq.push({0 , 0});
        
        // looping through N-1 times so that we dont form the 
        // cycle
        while(!pq.empty()){
            
           int u = pq.top().second;
           pq.pop();
           
            // it means now the uth node is now my part of the 
            // mst tree
            mst[u] = true;
            
            // iterating through neighbours and updating their 
            // minimum weight every time
            for(auto it : adj[u]){
                
                int v = it[0];
                int weight = it[1];
                
                // if the node is no the part of the mst and the 
                // parent -> node edge is minimum then the wedge we have 
                // previous it means that the this is the new minimum edge
                if(mst[v] == false && weight < key[v]){
                    parent[v] = u;
                    key[v] = weight;
                    pq.push({key[v] , v});
                }
                
            }
            
        }
        
        return accumulate(key , key+V , 0);
        
    }
};

// { Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}

  // } Driver Code Ends