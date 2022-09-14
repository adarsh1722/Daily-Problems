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
    map<int ,int>mp;
    int cnt = 0;
    void solve(TreeNode* root){
        
        if(!root){
            return;
        }
       
        if(!root->left && !root->right){
            mp[root->val] += 1;
            int odd = 0;
            for(int i = 1 ; i<= 9 ; i++){
                if(mp[i]&1){
                    odd++;
                }
            }
            mp[root->val] -= 1;
            if(odd == 1 || odd == 0) cnt++;
            return;
        }
        mp[root->val] += 1;
        solve(root->left);
        solve(root->right);
        mp[root->val] -= 1;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        solve(root);
        return cnt;
    }
};