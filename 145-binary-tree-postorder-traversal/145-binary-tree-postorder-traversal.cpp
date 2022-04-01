class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int>post;
        if(!root)
            return post;
        
        stack<TreeNode* >st1 , st2;
        st1.push(root);
        
        while(st1.empty() == false){
            
            root = st1.top();
            st1.pop();
            st2.push(root);
            if(root->left)st1.push(root->left);
            if(root->right)st1.push(root->right);
            
        }
        while(!st2.empty()){
            post.push_back(st2.top()->val);
            st2.pop();
        }
        return post;
        
    }
};