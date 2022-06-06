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
    void traverse(TreeNode*root , int leaf , int &sum){
        if(!root) return;
        if(!root->left && !root->right && leaf == 0) sum += root->val;
        traverse(root->left  , 0 , sum);
        traverse(root->right , 1 , sum);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        
        int sum = 0;
        traverse(root ,-1 ,  sum);
        return sum; 
    }
};