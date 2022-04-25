class Solution {
public:
    void deleteNode(ListNode* node) {
        
        /*update the current node value 
        with its adjacent nodes values*/
        node->val = node->next->val;
        /*update the address of the current node
        with the address stored in adjacent node*/
        node->next = node->next->next;
        
    }
};