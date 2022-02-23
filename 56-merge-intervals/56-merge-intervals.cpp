class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        int n  = intervals.size();
        
        if(n == 1){
            return intervals;
        }
        
        sort(intervals.begin() , intervals.end());
        
        vector<int>temp = intervals[0];
        vector<vector<int>>ans;
        for(auto pairs : intervals)
        {
            if(pairs[0] <= temp[1]){
                temp[1] = max(temp[1] , pairs[1]);
            }
            else{
                ans.push_back(temp);
                temp = pairs;
            }
        }
        ans.push_back(temp);
        return ans;
    }
};