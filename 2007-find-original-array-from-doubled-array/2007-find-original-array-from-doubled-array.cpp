class Solution {
public:
    vector<int> findOriginalArray(vector<int>& arr){
        
        int n = arr.size();
        if(n&1) return {};
        map<int , int>mp;
        for(auto x : arr){
            mp[x]++;
        }
        sort(arr.begin() , arr.end());
        vector<int>res;
        for(int i = 0 ; i < arr.size() ; i++){
            if(mp[arr[i]] > 0 && mp[2*arr[i]] > 0){
                mp[arr[i]] -= 1;
                if(mp[2*arr[i]] > 0){
                    mp[2*arr[i]] -= 1;
                    res.push_back(arr[i]);
                }
                else{
                    return {};
                }
            }
        }
        for(auto x : res){
            cout << x << " ";
        }
        if(res.size()*2 == n){
            return res;
        }
        return {};
        
        
    }
};