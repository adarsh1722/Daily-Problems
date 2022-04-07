class Solution {
public:
    void inorder(TreeNode* root , vector<int>&in){
        
        
        if(!root) return;
        inorder(root->left , in);
        in.push_back(root->val);
        inorder(root->right , in);
        
    }
    int kthSmallest(TreeNode* root, int k) {
        
        vector<int>in;
        inorder(root , in);
        return in[k-1];
        
        
    }
};