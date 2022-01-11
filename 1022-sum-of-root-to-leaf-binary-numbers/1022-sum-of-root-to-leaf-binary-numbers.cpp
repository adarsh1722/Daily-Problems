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
    int sol = 0 ;
    void sum(TreeNode* root , int num) {
        
        if(!root)  return ;
        
        num *= 2;
        num += root->val;
        
        if(!root->left && !root->right) sol += num;
        sum(root->left, num);
        sum(root->right, num);
       
        
        
    }
    int sumRootToLeaf(TreeNode* root) {
        
        if(!root)  return 0;
        
        sum(root , 0);
        return sol;
         
        
        
    }
};