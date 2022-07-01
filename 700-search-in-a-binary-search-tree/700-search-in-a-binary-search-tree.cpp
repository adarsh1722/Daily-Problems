
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int x) {
        
       while(root){
           
           if(root->val == x) return root;
           else if(root->val > x) root = root->left;
           else root = root->right;
       }
       return NULL;
        
    }
};