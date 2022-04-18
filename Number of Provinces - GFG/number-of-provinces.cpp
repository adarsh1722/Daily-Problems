// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    void dfs(int start , vector<vector<int>>&adj , int V, vector<int>&vis){
        
        vis[start] = 1;
        for(int i = 0 ; i < V ; i++){
            
            if(adj[start][i] == 1 && !vis[i]){
                dfs(i , adj , V , vis);
            }
            
        }
        
        
    }
    int numProvinces(vector<vector<int>> adj, int V) {
        
        int provinces = 0;
        vector<int>vis(V+1 , 0);
        
        for(int i = 0 ; i < V ; i++){
            
            if(!vis[i]){
                dfs(i , adj , V , vis);
                provinces++;
            }
            
        }
        return provinces;
        
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}  // } Driver Code Ends