class Solution {
public:
    double average(vector<int>& salary) {
        
        int n = salary.size();
        int minn = INT_MAX;
        int maxx = INT_MIN;
        double sum = 0;
        for(int x : salary){
            minn = min(minn ,x);
            maxx = max(maxx ,x);
            sum += double(x);
        }
        
        return (sum - (minn + maxx))/(n-2);
        
    }
};