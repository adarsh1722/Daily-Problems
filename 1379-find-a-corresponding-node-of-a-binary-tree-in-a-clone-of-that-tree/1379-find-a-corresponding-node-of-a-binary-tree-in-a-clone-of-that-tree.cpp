/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* dfs(TreeNode* cloned , TreeNode* target){
        if(cloned == NULL){
            return NULL;
        }
        
        if(cloned->val == target->val){
            return cloned;
        }
        
        TreeNode* left = dfs(cloned->left , target);
        TreeNode* right = dfs(cloned->right , target);
        if(left != NULL && right == NULL) return left;
        else if(left == NULL && right != NULL) return right;
        else return left;
        
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        
        if(!cloned) return NULL;
        return dfs(cloned , target);
        
    }
};