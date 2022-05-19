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
    void dfs(TreeNode* r , vector<int>&arr){
        if(!r) return;
        dfs(r->left ,arr);
        arr.push_back(r->val);
        dfs(r->right , arr);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        
        vector<int>res1 , res2 , res;
        dfs(root1 , res1);
        dfs(root2 , res2);
        int i = 0 , j = 0 , n = res1.size() , m = res2.size();
        while(i < n && j < m){
            if(res1[i] <= res2[j]){
                res.push_back(res1[i++]);
            }
            else{
                res.push_back(res2[j++]);
            }
        }
        while(i < n){
            res.push_back(res1[i++]);
        }
        while(j < m){
            res.push_back(res2[j++]);
        }
        return res;
        
    }
};