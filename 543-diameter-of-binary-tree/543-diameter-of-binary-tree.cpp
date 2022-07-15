
class Solution {
public:
    int f(TreeNode* root , int &maxx){
        if(!root) return 0;
        int lH = f(root->left , maxx);
        int rH = f(root->right , maxx);
        maxx = max(maxx , lH + rH);
        return 1 + max(lH , rH);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        
        if(!root) return 0;
        int maxx = -1;
        f(root , maxx);
        return maxx;
            
        
        
    }
};