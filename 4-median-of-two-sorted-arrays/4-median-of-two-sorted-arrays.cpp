class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
          
        vector<int>ans;
        for(auto x : nums1)ans.push_back(x);
        for(auto x : nums2)ans.push_back(x);
        sort(ans.begin(), ans.end());
        if(ans.size()&1) return ans[ans.size()*1.0/2];
        else return (ans[(ans.size() - 1)*1.0 /2] + ans[ans.size()*1.0 / 2] )*1.0/2;
        
    }
};