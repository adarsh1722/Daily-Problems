
class Solution {
public:
    void dfs(TreeNode* r , vector<int>&res){
        if(!r) return;
        dfs(r->left , res);
        dfs(r->right ,res);
        if(!r->left && !r->right){
            res.push_back(r->val);
            return;
        }
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>res1 ,res2;
        dfs(root1 , res1);
        dfs(root2 , res2);
        return res1 == res2;
        
    }
};