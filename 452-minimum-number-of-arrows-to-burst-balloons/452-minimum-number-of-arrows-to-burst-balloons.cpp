class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        
        int n = points.size();
        
        if(n  == 0){
            return 0;
        }
        
        sort(points.begin(), points.end());
        
        int cnt = 1, ans = 0 , maxEnd = points[0][1];
        for(auto pairs : points)
        {
            if(pairs[0] <= maxEnd)
            {
                cnt+=1;
                maxEnd = min(maxEnd , pairs[1]);
            }
            else
            {
                ans += 1;
                cnt = 1;
                maxEnd = pairs[1];
                
            }
        }
        ans += 1;
        
        return ans;
        
    }
};