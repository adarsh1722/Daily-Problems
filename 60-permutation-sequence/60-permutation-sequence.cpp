class Solution {
public:
    string getPermutation(int n, int k) {
        
        string ans;
        for(int i = 1 ; i <= n ; i++){
            ans += to_string(i);
        }
        while(k-1 > 0){
            next_permutation(ans.begin() , ans.end());
            k-=1;
        }
        return ans;
        
        
        
    }
};