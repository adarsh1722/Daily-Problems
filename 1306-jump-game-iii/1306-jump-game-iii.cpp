class Solution {
public:
    bool helper(vector<int>&arr , int start){
        if(arr[start] == -1){
            return false;
        }
        if(arr[start] == 0){
            return true;
        }
        
        int right  = start + arr[start];
        int left = start - arr[start];
        
        // mark as visited
        arr[start] = -1;
        
        return (right < arr.size() && helper(arr , right)) || (left >= 0  && helper(arr ,left));
        
    }
    bool canReach(vector<int>& arr, int start) {
        
        if(arr[start] == 0){
            return true;
        }
        return helper(arr , start);
        
    }
};