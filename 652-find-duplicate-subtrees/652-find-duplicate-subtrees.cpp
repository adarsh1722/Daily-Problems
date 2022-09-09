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
    unordered_map<string, int>mp;
    unordered_map<string , TreeNode* >node;
    string solve(TreeNode* root){
        if(!root) return "@";
        
        string left = solve(root->left);
        string right = solve(root->right);
        string ans = to_string(root->val) + '(' + left +')' + '(' + right + ')';
        mp[ans]+=1;
        node[ans] = root;
        return ans;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        
        if(!root) return {};
        
        solve(root);
        vector<TreeNode*>ans;
        for(auto x : mp){
            if(x.second > 1){
                auto add = node[x.first];
                ans.push_back(add);
            }
        }
        return ans;
        
    }
};