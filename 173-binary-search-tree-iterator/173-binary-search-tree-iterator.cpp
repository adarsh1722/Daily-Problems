class BSTIterator {
private :
    stack<TreeNode* >stck;
    void pushAll(TreeNode* node){
        while(node){
            stck.push(node);
            node = node->left;
        }
    }
public:
    BSTIterator(TreeNode* root) {
        pushAll(root);
    }
    
    int next() {
        TreeNode *tempnode = stck.top();
        stck.pop();
        pushAll(tempnode->right);
        return tempnode->val;
        
    }
    
    bool hasNext() {
        return !stck.empty();
        
    }
};

