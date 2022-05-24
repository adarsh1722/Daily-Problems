class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int k) {
        vector<int>count;
        for(int i = 0 ; i < rocks.size() ; i++){
            count.push_back(capacity[i] - rocks[i]);
        }
        sort(count.begin() , count.end());
        
        int ans = 0 ;
        for(auto x : count){
            if(k >= x){
            k -= x;
            }
            else{
                break;
            }
            ans++;
        }
        return ans;
        
    }
};