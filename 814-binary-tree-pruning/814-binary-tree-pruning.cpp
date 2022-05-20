
class Solution {
public:
    bool containsOne(TreeNode* root){
        if(root == NULL) return false;
        
        bool left = containsOne(root->left);
        bool right = containsOne(root->right);
        
        if(!left) root->left = NULL;
        if(!right) root->right = NULL;
        
        return root->val == 1 || left || right;
        
    }
    TreeNode* pruneTree(TreeNode* root) {
        return containsOne(root) ?root :NULL;
    }
};