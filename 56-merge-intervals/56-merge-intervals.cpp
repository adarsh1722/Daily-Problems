class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        
        int n = arr.size();
        vector<vector<int>>ans;
        vector<int>temp;
        sort(arr.begin() , arr.end());
        
        temp = arr[0];
        
        for(auto pairs : arr){
            
            if(pairs[0] <= temp[1]){
                temp[1] = max(temp[1], pairs[1]);
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