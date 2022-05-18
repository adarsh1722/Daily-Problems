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
    void f(TreeNode* root , vector<int>&bst){
        if(!root) return;
        bst.push_back(root->val);
        f(root->left , bst);
        f(root->right , bst);
    }
    int getMinimumDifference(TreeNode* root) {
        if(!root) return 0;
        vector<int>bst;
        f(root , bst);
        sort(bst.begin() , bst.end());
        int minn = INT_MAX;
        for(int i = 0 ; i< bst.size()-1 ;i++){
           minn = min(minn , abs(bst[i] - bst[i+1]));
        }
        return minn;
        
    }
};