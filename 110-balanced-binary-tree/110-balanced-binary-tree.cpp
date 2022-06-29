
class Solution {
public:
    int f(TreeNode* root){
        if(!root) return 0;
        
        int lh = f(root->left);
        int rh = f(root->right);
        
        if(abs(lh - rh) > 1){
            return 1e9;
        }
        
        return 1 + max(lh , rh);
        
    }
    bool isBalanced(TreeNode* root) {
        
        
        return f(root) >= 1e9 ? false : true;
        
    }
};