class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        // Approach : Using two arrays as indegree and outdegree
        
        
        vector<int>indegree(n+1 , 0);
        
        // treating the element of array as edge  a -> b
        for(auto &x : trust)
        {
            indegree[x[0]]--;
            indegree[x[1]]++;
        }
        int  count = 0;
        for(int i  = 1 ; i <= n ; i++){
            if(indegree[i] == n-1){
                count++;
            }
            
        }
        if(count > 1){
            return -1;
        }
        for(int i  = 1 ; i<= n ; i++)
        {
            if(indegree[i] == n-1)
                return i;
        }
        return -1;
        
        
        
                
    }
};