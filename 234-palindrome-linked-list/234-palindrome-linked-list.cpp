
class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL , *next;
        while(head){
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
            
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        
        if(!head || head->next == NULL){
            return true;
        }
        
        ListNode* slow , *fast ;
        slow = fast = head;
        
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            
        }
        
        slow->next = reverse(slow->next);
        slow = slow->next;
        ListNode* dummy = head;
        
        while(slow != NULL){
            if(slow->val != dummy->val) return false;
            slow = slow->next;
            dummy = dummy->next;
        }
        return true;
    }
};