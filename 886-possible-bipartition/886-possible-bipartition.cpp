class Solution {
public:
    vector<int>vis , col;
    bool dfs(int parent , int c, vector<int>adj[]){
        vis[parent] = 1;
        col[parent] = c;
        
        for(auto nbr : adj[parent]){
            if(!vis[nbr]){
                if(dfs(nbr , c^1 , adj) == false){
                    // cout << nbr << endl;
                    return false;
                }
            }
            else if(col[nbr] == col[parent] )return false;
        }
        return true;
        
    }
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        // int n = dislikes.size();
        vis.resize(n+1);
        col.resize(n+1);
        vector<int>adj[n+1];
        
        for(auto x  : dislikes){
           adj[x[0]].push_back(x[1]);
           adj[x[1]].push_back(x[0]);
        }
//         for(auto x : adj){
//             for(auto y : x){
//                 cout << y << " ";
//             }
//             cout << endl;
//         }
        
        for(int i = 1 ; i <= n ; i++){
            if(!vis[i] && dfs(i , 0 , adj) == false){
                return false;
            }
        }
        return true;
    }
};