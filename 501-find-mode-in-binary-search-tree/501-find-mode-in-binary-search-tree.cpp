/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void helper(TreeNode* root , vector<int>&ans )
    {
        if(!root) return;
        helper(root->left , ans);
        ans.push_back(root->val);
        helper(root->right , ans);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        helper(root , ans);
        int maxx = INT_MIN;
        int cnt = 1 ;
        map<int , int>mp;
        for(int i = 0 ; i < ans.size() ; i++) 
        {
            mp[ans[i]]+=1;
        }
        
        for(auto x : mp)
        {
            maxx = max(maxx , x.second);
        }
        
        vector<int>X;
        
        for(auto x : mp)
        {
            if(x.second == maxx)X.push_back(x.first);
        }
         return X;
       
    }
};