
class Solution {
public:
    
        
    void fun(TreeNode* root,vector<string>&v,string s){
        if(root->left==NULL && root->right==NULL){
            reverse(s.begin(),s.end());
            v.push_back(s);
        }
        if(root->left) fun(root->left,v,s+(char)('a'+root->left->val));
        if(root->right) fun(root->right,v,s+(char)('a'+root->right->val));
    }
    string smallestFromLeaf(TreeNode* root) {
        vector<string>v;
        if(root==NULL) return "";
        string s="";
        s+=char('a'+root->val);
        fun(root,v,s);
        sort(v.begin(),v.end());
        return v[0];
    }
        
    
};