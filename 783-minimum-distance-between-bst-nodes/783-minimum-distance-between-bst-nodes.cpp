/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode* root , int& diff , int &val){
        if(!root) return;
        dfs(root->left , diff ,val);
        if(val >= 0){
            diff = min(diff , abs(root->val - val));
        }
        val = root->val;
        dfs(root->right , diff ,val);
    }
    int minDiffInBST(TreeNode* root) {
        int diff = INT_MAX , val = -1;
        dfs(root , diff , val);
        return diff; 
    }
};