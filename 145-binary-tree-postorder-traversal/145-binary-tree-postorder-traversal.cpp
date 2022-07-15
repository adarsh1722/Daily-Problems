
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int>post;
        if(!root){
            return post;
        }
        stack<TreeNode* >s1 , s2;
        
        s1.push(root);
        while(!s1.empty()){
            TreeNode* curr = s1.top();
            s1.pop();
            s2.push(curr);
            if(curr->left)s1.push(curr->left);
            if(curr->right)s1.push(curr->right);
        }
        while(!s2.empty()){
            post.push_back(s2.top()->val);
            s2.pop();
        }
        return post;
        
    }
};