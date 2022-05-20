
class Solution {
public:
   
    bool check(TreeNode* p , TreeNode* q){
        if(!p || !q){
            return p == q;
        }
        return p->val == q->val && check(p->left , q->left ) && check(p->right , q->right);
    }
    bool dfs(TreeNode* r1 , TreeNode* r2){
        if(!r1) return false; ;
        if(r1->val == r2->val){
            if (check(r1  , r2)){
               return true;
            }
        }
        bool left = dfs(r1->left , r2);
        bool right = dfs(r1->right , r2);
        return left || right;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
        return dfs(root , subRoot);
        // return flag;
    }
};