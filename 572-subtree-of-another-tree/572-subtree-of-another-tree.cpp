
class Solution {
public:
    int flag = false;
    bool check(TreeNode* p , TreeNode* q){
        if(!p || !q){
            return p == q;
        }
        return p->val == q->val && check(p->left , q->left ) && check(p->right , q->right);
    }
    void dfs(TreeNode* r1 , TreeNode* r2){
        if(!r1) return ;
        if(r1->val == r2->val){
            if (check(r1  , r2)){
                flag = true;
                return;
            }
        }
        dfs(r1->left , r2);
        dfs(r1->right , r2);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
        dfs(root , subRoot);
        return flag;
    }
};