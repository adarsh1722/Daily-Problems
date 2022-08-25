/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        map<Node* , Node*>mp;
        
        Node* t = head;
        
        while(t){
            
           
            Node* newnode = new Node(t->val);
            mp[t] = newnode;
            t = t->next;
            
        }
        
        t = head;
        
        while(t){
            
            Node* curr = mp[t]; // first node
            Node* x = mp[t->random]; // randome node
            curr->random = x ;
            t = t->next;
            
        }
        
        Node dummy(-1);
        Node* tail = &dummy;
        
        t  = head;
        while(t){
           Node * curr = mp[t];
           tail->next = curr;
           tail = curr;
           t = t->next;
        }
        
      
        return dummy.next;
        
        
    }
};