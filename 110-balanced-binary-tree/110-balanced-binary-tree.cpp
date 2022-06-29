
class Solution {
public:
    int h(TreeNode* t){
        return t == NULL ? 0 : 1 + max(h(t->left) , h(t->right));
    }
    bool isBalanced(TreeNode* root) {
        
        if(!root) return true;
        
        if(abs(h(root->left) - h(root->right)) > 1){
            return false;
        }
        
        int left = isBalanced(root->left);
        int right = isBalanced(root->right);
        return left && right;
        
    }
};