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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>>ans;
        if(root == NULL){
            return ans;
        }
        
        queue<TreeNode* >q;
        q.push(root);
        int cnt = 0;
        while(q.empty() == false)
        {
            int n = q.size();
            vector<int>level;
            while(n--){
                
                TreeNode* temp_node = q.front();
                q.pop();
                level.push_back(temp_node->val);
                if(temp_node->right) q.push(temp_node->right);
                if(temp_node->left) q.push(temp_node->left);
                
                
            }
            
            if(cnt%2 == 0){
                reverse(level.begin() , level.end());
            }
            cnt++;
            ans.push_back(level);
        }
        
        return ans;
        
        
    }
};