
class Solution {
public:
    void dfs(TreeNode* root , int &sum , int level , int &h){
        if(!root){
            return;
        }
        if(level == h - 1 && root->left == NULL && root->right == NULL){
            sum += root->val;
            return;
        }
        
        dfs(root->left , sum , level+1 , h);
        dfs(root->right, sum , level+1 , h);
        
        
    }
    int height(TreeNode* root){
        if(!root){
            return 0;
        }
        int l = height(root->left);
        int r = height(root->right);
        return max(l , r) + 1;
        
    }
    int deepestLeavesSum(TreeNode* root) {
        if(!root) return 0;
        int sum = 0 ;
        int h = height(root);
        // cout << h << endl;
        dfs(root ,sum , 0 , h);
        return sum;
        
        
    }
};