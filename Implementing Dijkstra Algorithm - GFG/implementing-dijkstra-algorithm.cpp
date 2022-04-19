// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // adj = {{node , dist}}
        
        vector<int>dist(V , INT_MAX);
        dist[S] = 0;
        
        // minheap = {dist , node}
        priority_queue<pair<int , int> , vector<pair<int , int>> ,greater<pair<int , int>> >pq;
        pq.push({dist[S] , S});
        while(!pq.empty()){
            
            int prev = pq.top().second;
            pq.pop();
            
            for(int i = 0 ; i < adj[prev].size() ; i++){
                
                if(dist[adj[prev][i][0]] > dist[prev] + adj[prev][i][1]){
                    dist[adj[prev][i][0]] = dist[prev] + adj[prev][i][1];
                    pq.push({dist[adj[prev][i][0]] , adj[prev][i][0]});
                }
                
                
            }
           
        }
        
        return dist;
        
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
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}

  // } Driver Code Ends