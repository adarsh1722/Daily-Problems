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
    int sumOfLeftLeaves(TreeNode* root) {
        
        if(!root){
            return 0;
        }
        
        int sum = 0;
        queue<pair<TreeNode* , int>>q;
        q.push({root , -1});
        while(!q.empty()){
            int n = q.size();
            for(int i = 1 ; i <= n ; i++){
                 auto p = q.front();
                 q.pop();
                 auto node = p.first;
                 int leaf = p.second;
                 if(leaf == 0 && !node->left && !node->right){
                     sum += node->val;
                 }
                 if(node->left){
                     q.push({node->left , 0});
                 }
                 if(node->right){
                     q.push({node->right , 1});
                 }
                
            }
                
        }
        return sum;
        
    }
};