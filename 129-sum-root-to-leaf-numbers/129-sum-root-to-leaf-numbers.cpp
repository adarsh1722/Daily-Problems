
class Solution {
public:
    int total = 0;
    void helper(TreeNode* r , int sum){
        if(r == NULL) return;
        sum = sum*10 + r->val;
        if(!r->left && !r->right){
            total += sum;
            return ;
        }
        helper(r->left , sum);
        helper(r->right , sum);
    }
    int sumNumbers(TreeNode* root) {
        total = 0;
        helper(root , 0);
        return total;
    }
};