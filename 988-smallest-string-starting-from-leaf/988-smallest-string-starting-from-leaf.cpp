
class Solution {
public:
            
    void fun(TreeNode* root,vector<string>&v,string s){
        if(!root){
            return;
        }
        s += string(1 , 'a' + root->val);
        if(root->left == NULL && root->right == NULL){
            reverse(s.begin(),s.end());
            v.push_back(s);
            return ;
        }
        fun(root->left , v , s );
        fun(root->right, v , s );
    }
    
    string smallestFromLeaf(TreeNode* root) {
        vector<string>v;
        if(root==NULL) return "";
        string s="";
        // s+=string(1 , 'a' + root->val);
        fun(root,v,s);
        sort(v.begin(),v.end());
        return v[0];
    }
        
    
};