class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        
        // Time Complexity = O(NlogN)
        // Space Complexity = O(1)
        
        if(points.size() == 0)
             return 0;
        
        sort(points.begin(), points.end());
        
        int cnt = 1, ans = 0 , maxEnd = points[0][1];
        for(auto pairs : points){
            if(pairs[0] <= maxEnd){
                maxEnd = min(maxEnd , pairs[1]);
            }
            else{
                ans += 1;
                maxEnd = pairs[1];
            }
        }
        
        return ans + 1;
    }
};