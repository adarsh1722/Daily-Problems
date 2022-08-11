class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        map<int , int>mp;
        for(auto x :arr){
            mp[x]+=1;
        }
        int cnt = 0 ;
        for(int i = 1 ; i<=1e6;i++){
            if(mp[i] == 0){
                cnt+=1;
            }
            if(cnt == k){
                return i;
            }
        }
        return -1;
        
    }
};