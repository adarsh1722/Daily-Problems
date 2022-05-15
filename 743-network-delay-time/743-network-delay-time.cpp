class Solution {
public:
    vector<int> dijkstra(vector<vector<int>>adj[], int n , int src){
       
        vector<int>dis(n , INT_MAX);
        dis[src] = 0;
        
        // minheap = {dist, node}
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<void>> pq;
        pq.push({dis[src] , src});
        
        while(!pq.empty()){
            int prev = pq.top().second;
            pq.pop();
            
            for(int i = 0 ; i < adj[prev].size() ; i++){
                if(dis[adj[prev][i][0]] > dis[prev] + adj[prev][i][1]){
                    dis[adj[prev][i][0]] = dis[prev] + adj[prev][i][1];
                    pq.push({dis[adj[prev][i][0]] , adj[prev][i][0]});
                }
            }
            
            
        }
        return dis;
    }
    int networkDelayTime(vector<vector<int>>& a, int n, int k) {

        vector<vector<int>>g[n];
        for(int i = 0 ; i < a.size() ; i++){
            int u = a[i][0] - 1 , v = a[i][1] -1 , d = a[i][2];
            g[u].push_back({v , d});
        }
        
        auto ret = dijkstra(g ,  n , k-1);
        
        int highestTime = 0;
        for(int i = 0  ; i < n  ; i++){
            if(ret[i] == INT_MAX) return -1;
            highestTime = max(highestTime , ret[i]);
        }
        return highestTime;
        
        
        
    }
};