
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>>ans;
        if(root == NULL){
            return ans;
        }
        
        queue<TreeNode* >q;
        q.push(root);
        bool leftToRight = true;
        while(q.empty() == false)
        {
           
            int n = q.size();
            vector<int>level(n);
           for(int i = 0 ; i  < n ; i++){
                
                TreeNode* temp_node = q.front();
                q.pop();
                int idx  = leftToRight ? i : n - i - 1;
                level[idx] = temp_node->val;
                if(temp_node->left) q.push(temp_node->left);
                if(temp_node->right) q.push(temp_node->right);
                
                
                
            }
                  
            ans.push_back(level);
            leftToRight = !leftToRight;
        }
        
        return ans;
        
        
    }
};