class Solution {
public:
    bool symmetric(TreeNode* l , TreeNode* r){
        
        if(l == NULL || r == NULL){
            return l == r;
        }
        if(l->val != r->val) {
            return false;
        }
        return symmetric(l->left , r->right) && symmetric(l->right , r->left);
        
        
    }
    bool isSymmetric(TreeNode* root) {
        
        if(!root){
            return true;
        }
        
        return symmetric(root->left , root->right);
        
    }
};