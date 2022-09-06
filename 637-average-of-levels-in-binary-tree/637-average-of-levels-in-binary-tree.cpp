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
    vector<double> averageOfLevels(TreeNode* root) {
        
        vector<double>ans;
        
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            int n = q.size() , sz  = n;
            double curr = 0.0;
            while(n--){
                TreeNode* node = q.front();
                q.pop();
                
                curr += node->val;
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
                
                
                
            }
            ans.push_back((curr*1.0)/sz);
        }
        return ans;
        
    }
};