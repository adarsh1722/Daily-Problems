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
    string solve(TreeNode* root){
        if(!root) return "";
        
        string left = solve(root->left);
        string right = solve(root->right);
        string ans = to_string(root->val);
        if(left.size() == 0 && right.size() != 0) ans += '(' + left + ')';
        else if(left.size() != 0) ans += '(' + left + ')';
        if(right.size() != 0) ans += '(' + right + ')';
        return ans;
    }
    string tree2str(TreeNode* root) {
        
        if(!root){
            return ""; 
        }
        return solve(root);
        
    }
};