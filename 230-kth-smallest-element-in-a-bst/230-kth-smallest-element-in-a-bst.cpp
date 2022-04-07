class Solution {
public:
    void preorder(TreeNode* root , vector<int>&in){
        
        
        if(!root) return;
        
        in.push_back(root->val);
        
        preorder(root->left , in);
        
        preorder(root->right , in);
        
    }
    int kthSmallest(TreeNode* root, int k) {
        
        if(!root) return -1 ;
        vector<int>in;
        preorder(root , in);
        sort(in.begin() , in.end());
        return in[k-1];
        
        
    }
};