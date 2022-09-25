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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        vector<vector<int>>ans;
        // <column , <level , values>>
        map<int , map<int , multiset<int>>>mp;
        // <root , <column  , level>>
        queue<pair<TreeNode* , pair<int ,int>>>q;
        q.push({root , {0 , 0}});
            
        while(!q.empty()){
            
            auto p = q.front();
            q.pop();
            TreeNode* node = p.first;
            int x = p.second.first , y = p.second.second;
            
            // x => column , y => level
            mp[x][y].insert(node->val);
            
            if(node->left){
                q.push({node->left , {x-1 , y+1}});
            }
            if(node->right){
                q.push({node->right , {x+1 , y+1}});
            }
            
        }
        
        for(auto it : mp){
            vector<int>col;
            for(auto q : it.second){
                        //(position , start_iterator  ,end_iterator)
                col.insert(col.end() , q.second.begin() , q.second.end());
            }
            ans.push_back(col);
            
        }
        return ans;
        
    }
};