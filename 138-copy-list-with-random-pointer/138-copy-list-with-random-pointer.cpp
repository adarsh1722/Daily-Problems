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
        Node* temp = head;
        Node* dummy = new Node(-1);
        Node* tail = dummy;
        while(temp){
            Node* now  = new Node(temp->val);
            tail->next = now;
            tail = tail->next;
            mp[temp] = now;
            temp = temp->next;
            
        }
        
        temp = head;
        while(temp){
            Node * newRandom = temp->random;
            mp[temp]->random = mp[newRandom];
            temp = temp->next;
        }
        
        return dummy->next;
        
        
    }
};