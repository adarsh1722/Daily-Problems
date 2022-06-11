
class Solution {
public:
    void f(TreeNode* root , vector<int>&ans){
        if(!root) return;
        f(root->left , ans);
        ans.push_back(root->val);
        f(root->right , ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int>ans;
        f(root , ans);
        return ans;
        
    }
};