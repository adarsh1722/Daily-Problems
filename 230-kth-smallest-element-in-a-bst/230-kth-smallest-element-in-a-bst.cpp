
class Solution {
public:
    int ans = -1;
    void inorder(TreeNode* root , int k ,int &cnt)
    {
        if(!root) return  ;
        inorder(root->left , k , cnt);
        cnt += 1;
        if(cnt == k){
            ans = root->val;
            return;
        }
        inorder(root->right , k , cnt);
    }
    int kthSmallest(TreeNode* root, int k) {
       
        int cnt = 0;
        inorder(root , k , cnt);
        return ans;
    }
        
};