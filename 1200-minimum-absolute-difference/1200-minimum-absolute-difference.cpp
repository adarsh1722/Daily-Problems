class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& a) {
        
        int mini = 1e9 ,  n = a.size();
        sort(a.begin() , a.end());
        for(int i = 1 ; i < n ; i++){
            mini = min(mini , a[i] - a[i-1]);
        }
        
        vector<vector<int>>arr;
        for(int i = 1 ; i < n ; i++){
            if(a[i] - a[i - 1] == mini){
                arr.push_back({a[i-1] , a[i]});
            }
        }
        return arr;
        
    }
};