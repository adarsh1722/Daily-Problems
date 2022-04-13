
class Solution {
public:
    int maxPathDown(TreeNode*root , int &maxi){
        
        if(!root){
            return 0;
        }
        int left = max(0 , maxPathDown(root->left , maxi) );
        int right = max(0 , maxPathDown(root->right , maxi));
        
        maxi = max(maxi , left + right + root->val);
        return max(left , right) + root->val;
        
    }
    int maxPathSum(TreeNode* root) {
        
        int maxi = INT_MIN;
        maxPathDown(root , maxi);
        return maxi;
        
    }
};