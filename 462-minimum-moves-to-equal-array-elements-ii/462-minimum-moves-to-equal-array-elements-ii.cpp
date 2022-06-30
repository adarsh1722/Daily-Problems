class Solution {
public:
    int minMoves2(vector<int>& nums) {
        
        sort(nums.begin() , nums.end());
        int n = nums.size();
        if(n == 1){
            return 0;
        }
        if(n%2 == 0){
            
            int ele = nums[n/2];
            int moves = 0;
            for(int i = 0 ; i < n ; i++){
                moves += abs(nums[i] - ele);
            }
            return moves;
            
        }
        else{
            
            int ele1 = nums[n/2] , ele2 = nums[n/2-1];
            int moves1 = 0 , moves2 = 0;
            
            for(int i = 0 ;i < n ; i++){
                moves1 += abs(nums[i] - ele1);
                moves2 += abs(nums[i] - ele2);
            } 
            
            return min(moves1 , moves2);
            
        }
        
    }
};