
class Solution {
public:
    void solve(TreeNode* root , vector<int>&in){
        if(!root){
            return;
        }
        solve(root->left  , in);
        in.push_back(root->val);
        solve(root->right , in);
        
    }
    bool findTarget(TreeNode* root, int k) {
        
        vector<int>inorder;
        solve(root , inorder);
        int i = 0 , j = inorder.size()-1;
        
        while(i < j){
            
            int sum = inorder[i] + inorder[j];
            if(sum == k) return true;
            else if(sum > k )j--;
            else i++;
            
        }
        return false;
        
    }
};