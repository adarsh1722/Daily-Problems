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
    void solve(TreeNode* root , int &k ,int &cnt , int &ans){
        if(!root) return;
        solve(root->left , k , cnt , ans);
        cnt += 1;
        if(cnt == k){
            ans = root->val;
            return;
        }
        solve(root->right , k , cnt , ans);
    }
    int kthSmallest(TreeNode* root, int k) {
        
        if(!root ){
            return -1;
        }
        
        int cnt = 0 , ans = 0;
        solve(root , k , cnt , ans);
        return ans;
    }
};