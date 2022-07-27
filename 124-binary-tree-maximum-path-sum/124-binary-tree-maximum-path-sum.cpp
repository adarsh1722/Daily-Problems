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
    int maxpath(TreeNode* nodes, int & maxi)
    {
        if(nodes==NULL)
            return 0;
        int lh = max(0 , maxpath(nodes->left,maxi));
        int rh = max(0,maxpath(nodes->right,maxi));
        maxi= max(maxi,lh+rh+nodes->val);
        return max(lh , rh) + nodes->val;
        
    }
    int maxPathSum(TreeNode* root) 
    {
        int maxi = INT_MIN;
        
        if(root==NULL)
        {
            return 0;
        }
    
        maxpath(root,maxi);
        return maxi;
        
    }

};