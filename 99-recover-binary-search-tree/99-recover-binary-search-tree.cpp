
class Solution {
public:
    vector<int>in;
    void inorder(TreeNode* root)
    {
        if(!root) return;
        inorder(root->left);in.push_back(root->val);inorder(root->right);
        
    }
    void correctBST(TreeNode* root, int& i)
    {
        if(!root) return;
        correctBST(root->left, i);
        root->val = in[i++];
        correctBST(root->right, i);
        
    }
    void recoverTree(TreeNode* root) {
        TreeNode* dummy = root;
        inorder(root);
        sort(in.begin(), in.end());
        int i = 0;
        correctBST(dummy , i);
        
        
        
    }
};