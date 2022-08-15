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
    int ans = 0;
    int getMaxDiameter(TreeNode* r){
        if(!r) return 0;
        
        int lh = getMaxDiameter(r->left);
        int rh = getMaxDiameter(r->right);
        // ans = max(ans , lh + rh);
        return 1 + max(lh , rh);
    }
    void dfs(TreeNode* r){
        if(!r) return ;
        
        int lh = getMaxDiameter(r->left);
        int rh = getMaxDiameter(r->right);
        ans = max(ans , lh + rh);
        dfs(r->left);
        dfs(r->right);
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        ans = 0;
        
        if(!root) return 0;
        
        dfs(root);
        return ans;
        
        
    }
};