class Solution {
public:
    void dfs(vector<vector<int>> &rooms , vector<bool> &visited , int start){
        visited[start] = 1;
        for(auto i : rooms[start]){
            if(!visited[i]){
                dfs(rooms , visited, i);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        int n = rooms.size();
        vector<bool>visited(n , 0);
        dfs(rooms ,visited , 0);
        return rooms.size() == count(visited.begin() , visited.end() , 1);
        
        
        
    }
};