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
    TreeNode* reverseOddLevels(TreeNode* root) {
        
        queue<TreeNode* >q;
        q.push(root);
        vector<vector<int>>levels;
        while(!q.empty()){
            int n = q.size();
            vector<int>curr;
            while(n--){
                auto node = q.front();
                q.pop();
                curr.push_back(node->val);
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
            levels.push_back(curr);
        }
//         cout << "hii\n";
//         cout << levels.size();
        
        int level = 0 ;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int>curr = levels[level];
            if(level&1) reverse(curr.begin() , curr.end());
            level++;
            int i = 0 ;
            while(n--){
                auto node = q.front();
                node->val = curr[i++];
                q.pop();
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
        }
        
        return root;
        
    }
};