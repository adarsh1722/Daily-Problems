#define pii pair<int , pair<int , int>>
class Solution {
public:
    
    int kthSmallest(vector<vector<int>>& arr, int k) {
        
        int n = arr.size();
        int ans = 0;
        
        int cnt = 1;
        
        priority_queue<pii , vector<pii> , greater<pii>>pq;
        
        for(int i  = 0 ; i < n ; i++){
            pq.push({arr[i][0] , {i , 0}});
        }
        
        while(cnt <= k){
            
            auto node = pq.top();
            pq.pop();
            int val = node.first;
            ans = val;
            int row = node.second.first;
            int col = node.second.second;
            if(col + 1 < n ){
                pq.push({arr[row][col+1] , {row , col+1}});
            }
            cnt+=1;
            
        }
        return ans;
        
    }
};