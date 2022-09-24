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
     int width(TreeNode* root,int &max_width){
        if(!root) return 0;
        
        int lh = width(root->left , max_width);
        int rh = width(root->right , max_width);
        max_width = max(max_width , lh + rh);
        
        return 1 + max(lh ,rh);
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        
        if(!root) return 0;
        int max_width = 0;
        width(root , max_width);
        return max_width;
    }
};