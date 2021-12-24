class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       
        vector<vector<int>> mergedIntervals;
        
        if(intervals.size() == 0)
        {
            return mergedIntervals;
        }
        
        sort(intervals.begin() , intervals.end()); // sort the vector of vector
        
        vector<int>tempInterval = intervals[0];
        
        for(auto pairs : intervals )
        {
            if(pairs[0] <= tempInterval[1])
            {
                tempInterval[1] = max(tempInterval[1]  , pairs[1]);
            }
            else
            {
                mergedIntervals.push_back(tempInterval);
                tempInterval = pairs;
            }
        }
        
        mergedIntervals.push_back(tempInterval);
        return mergedIntervals;
        
    }
};