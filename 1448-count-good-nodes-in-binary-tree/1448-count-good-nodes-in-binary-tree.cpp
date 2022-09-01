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
    int cnt = 0;
    void dfs(TreeNode* root , int maxx){
        
        if(!root) return;
        if(root->val >= maxx){
            cnt++;
        }
        dfs(root->left, max(maxx ,root->val));
        dfs(root->right, max(maxx ,root->val));
        
    }
    int goodNodes(TreeNode* root) {
        cnt = 0;
        int maxx = INT_MIN;
        dfs(root , maxx);
        return cnt;
    }
};