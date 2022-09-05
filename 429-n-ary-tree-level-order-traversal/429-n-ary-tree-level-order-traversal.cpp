/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(!root) return {};
        queue<Node*>q;
        vector<vector<int>>res;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int>curr;
            while(n--){
                Node* p = q.front();
                q.pop();
                curr.push_back(p->val);
                for(int i = 0 ; i < p->children.size() ; i++){
                    if(p->children[i])q.push(p->children[i]);
                }
                
                
            }
            res.push_back(curr);
        }
        return res;
        
    }
};