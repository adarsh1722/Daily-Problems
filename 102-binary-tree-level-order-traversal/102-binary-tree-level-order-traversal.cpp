
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>>level;
        if(!root) return level;
        queue<TreeNode* >q;
        q.push(root);
        while(q.empty() == false)
        {
            int size = q.size();
            vector<int>temp;
            while(size--)
            {
                TreeNode* node = q.front();
                q.pop();
                temp.push_back(node->val);
                if(node->left)q.push(node->left);
                
                if(node->right)q.push(node->right);
                
                
                
            }
            level.push_back(temp);
        }
        return level;
    }
};