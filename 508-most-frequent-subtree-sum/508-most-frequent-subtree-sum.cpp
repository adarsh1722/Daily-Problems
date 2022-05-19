class Solution {
public:
    int dfs(TreeNode* r , int sum , unordered_map<int , int>&mp , int &maxFreq ){
        if(!r) return 0;
        int left = dfs(r->left , sum , mp , maxFreq);
        int right = dfs(r->right , sum , mp , maxFreq);
        int subSum = left + right + r->val;
        mp[subSum] += 1;
        maxFreq = max(maxFreq , mp[subSum]);
        return subSum;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        unordered_map<int , int>mp;
        int maxFreq = 0;
        dfs(root , 0 , mp , maxFreq);
        vector<int>res;
        for(auto x : mp){
            if(x.second == maxFreq){
                res.push_back(x.first);
            }
        }
        return res;
    }
};