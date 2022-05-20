
class Solution {
public:
   
    bool check(TreeNode* p , TreeNode* q){
        if(!p || !q){
            return p == q;
        }
        return p->val == q->val && check(p->left , q->left ) && check(p->right , q->right);
    }
    
    bool isSubtree(TreeNode* r1 , TreeNode* r2) {
        
        if(!r1) return false;
        if(check(r1 , r2)){
            return true;
        }
        
        return isSubtree(r1->left , r2) || isSubtree(r1->right , r2);
        
        
        
    }
};