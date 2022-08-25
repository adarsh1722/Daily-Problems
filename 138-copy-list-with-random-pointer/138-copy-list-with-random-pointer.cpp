

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        
        // nodes ke beech me node dalo
        Node* node = head;
        
        while(node){
            Node* temp = node->next;
            node->next = new Node(node->val);
            node->next->next = temp;
            node = temp;
        }
        
        // random pointer ko copy krna h
        
        node = head;
        
        while(node){
            
            if(node->random){
                
                node->next->random = node->random->next;
            }
            
            node = node->next->next;
            
            
            
        }
        
        // node ko alag kr lo
        
        Node* ans  = new Node(0);
        Node* helper = ans;
        while(head){
            
            helper->next = head->next;
            helper = helper->next;
            
            
            head->next = head->next->next;
            head = head->next;
            
        }
        
        return ans->next;
        
        
        
    }
};