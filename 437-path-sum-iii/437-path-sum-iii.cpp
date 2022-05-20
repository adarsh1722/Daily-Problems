#define ll long long int
class Solution {
public:
    int count = 0;
    void ways(TreeNode* r , ll targetSum){
        if(!r) return;
        targetSum = targetSum - r->val;
        if(targetSum == 0 ){
            count++;
        }
        ways(r->left , targetSum);
        ways(r->right , targetSum);
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(root == NULL){
            return 0;
        }
        ways(root , targetSum);
        pathSum(root->left , targetSum);
        pathSum(root->right , targetSum);
        return count;
        
    }
};