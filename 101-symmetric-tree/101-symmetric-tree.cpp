
class Solution {
public:
    bool f(TreeNode* l , TreeNode* r){
        
        if(l == NULL || r == NULL){
            return l == r;
        }
        if(l->val != r->val){
            return false;
        }
        
        return f(l->left , r->right) && f(l->right , r->left);
    }
    bool isSymmetric(TreeNode* root) {
        
        if(!root){
            return true;
        }
        
        return f(root->left , root->right);
        
    }
};