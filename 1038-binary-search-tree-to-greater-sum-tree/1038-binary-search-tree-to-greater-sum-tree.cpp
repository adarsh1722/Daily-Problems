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
    void dfs(TreeNode*r , int &sum){
        if(!r) return;
        // right
        dfs(r->right , sum);
        
        // root
        int val = sum + r->val;
        r->val = val;
        sum = val;
        
        // left
        dfs(r->left , sum);
    }
    TreeNode* bstToGst(TreeNode* root) {
        int sum = 0;
        dfs(root , sum );
        return root;
    }
};