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
    TreeNode* buildTree(int preStart ,int preEnd , vector<int>&pre , int inStart , int inEnd , vector<int>&in , unordered_map<int , int>&mp){
        
        if(preStart > preEnd || inStart > inEnd){
            return NULL;
        }
        
        TreeNode* root = new TreeNode(pre[preStart]);
        int inRoot = mp[pre[preStart]];
        int numLeft = inRoot - inStart;
        root->left =  buildTree(preStart + 1 , preStart + numLeft  , pre , inStart  ,inRoot-1 , in ,mp );
        
        root->right = buildTree(preStart + numLeft + 1 , preEnd  , pre , inRoot+1 , inEnd , in , mp);
        
        return root;
        
    }
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        
        int n = in.size();
        unordered_map<int ,int>mp;
        for(int i = 0 ; i < n ; i++){
            mp[in[i]] = i;
        }
        
        return buildTree(0 , n-1,  pre , 0 ,n-1 , in , mp);
        
        
    }
};