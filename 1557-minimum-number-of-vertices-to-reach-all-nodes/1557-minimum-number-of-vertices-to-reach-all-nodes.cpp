class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>adj[n];
        
        // building the graph
        for(auto x : edges){
            adj[x[0]].push_back(x[1]);
            // adj[x[1]].push_back(x[0]);
        }
        vector<int>degree(n);
        
        for(auto x : adj){
            for(auto y : x){
                // cout << y << " ";
                degree[y]+=1;
            }
            // cout << endl;
        }
        vector<int>arr;
        for(int  i = 0 ; i < n ; i++){
            if(degree[i] == 0){
              arr.push_back(i);
            }
        }
        return arr;
        
    }
};