
class Solution {
public:
    int maxSum(TreeNode*root ,int& maxi){
        if(!root){
            return 0;
        }
        
        int left = max(0 , maxSum(root->left , maxi));
        int right = max(0 , maxSum(root->right , maxi));
        
        maxi = max(maxi , left + right + root->val);
        
        return max(left , right ) + root->val;
        
    }
    int maxPathSum(TreeNode* root) {
        
        if(!root){
            return 0;
        }
        int maxi  = INT_MIN;
        maxSum(root , maxi);
        return maxi;
        
    }
};