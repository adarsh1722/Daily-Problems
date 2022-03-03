class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        set<int>hashSet;
        for(auto x : nums){
            hashSet.insert(x);
        }
        
        // making something as i = 0 
        set<int>::iterator i = hashSet.begin(); 
        for(auto &x : nums){
            x = *i; // dereferencing the iterator
            i++; // moving iterator one step ahead
        }
        return hashSet.size();
        
        
        
    }
};