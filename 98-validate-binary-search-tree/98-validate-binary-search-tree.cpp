
class Solution {
public:
    bool isValidBSt(TreeNode* root , long long int minval , long long int maxval){
        if(root == NULL) return true;
        if(root->val >= maxval || root->val <= minval) return false;
        return isValidBSt(root->left , minval , root->val) && isValidBSt(root->right , root->val , maxval);
    }
    bool isValidBST(TreeNode* root) {
        return isValidBSt(root , LLONG_MIN , LLONG_MAX);
    }
   
};