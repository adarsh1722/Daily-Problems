class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        
        vector<vector<int>>adj(n , vector<int>(n , 0));
        vector<int>vec(n);
        for(int i = 0 ; i < roads.size() ; i++){
            adj[roads[i][0]][roads[i][1]] = 1;
            adj[roads[i][1]][roads[i][0]] = 1;
            vec[roads[i][0]]+=1;
            vec[roads[i][1]]+=1;
        }
        
        int maxx = 0;
        
        for(int i = 0 ; i < n ; i++){
            for(int j = i+1 ; j < n ; j++){
                int sum = vec[i] + vec[j];
                if(adj[i][j] == 1){
                    sum--;
                }
                maxx = max(maxx , sum);
            }
        }
        return maxx;
    }
};