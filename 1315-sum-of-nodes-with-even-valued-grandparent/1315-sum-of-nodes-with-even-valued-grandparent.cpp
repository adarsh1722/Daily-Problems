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
    int sum = 0;
    void helper(TreeNode* r , TreeNode* parent , TreeNode* gp){
        if(!r) return;
        if(gp != NULL && gp->val%2 == 0){
            sum += r->val;
        }
        helper(r->left , r  , parent);
        helper(r->right , r , parent);
    }
    int sumEvenGrandparent(TreeNode* root) {
        helper(root , NULL , NULL);
        return sum;
    }
    
};