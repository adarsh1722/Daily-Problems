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
    
    int  helper(TreeNode* r , TreeNode* parent , TreeNode* gp){
        int sum = 0;
        if(!r) return 0 ;
        if(gp != NULL && gp->val%2 == 0){
            sum += r->val;
        }
        sum  += helper(r->left , r  , parent);
        sum += helper(r->right , r , parent);
        return sum;
    }
    int sumEvenGrandparent(TreeNode* root) {
        return helper(root , NULL , NULL);
        
    }
    
};