class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        set<int>hashSet;
        for(auto x : nums){
            hashSet.insert(x);
        }
        
        set<int>::iterator it = hashSet.begin();
        for(auto &x : nums){
            x = *it;
            it++;
        }
        return hashSet.size();
        
        
        
    }
};