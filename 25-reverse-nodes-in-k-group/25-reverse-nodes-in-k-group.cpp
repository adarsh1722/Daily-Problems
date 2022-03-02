class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        
        if(head == NULL || k == 1 ){
            return head;
        }
        
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode* cur = head , *next = cur->next , *pre = dummy;
        int count = 0;
        
        while(cur != NULL){
            count++;
            cur = cur->next;
        }
        
        while(count >= k){
            
            cur = pre->next;
            next = cur->next;
            
            for(int i = 1 ; i < k ; i++){
                cur->next = next->next;
                next->next =pre->next;
                pre->next = next;
                next = cur->next;
            }
            pre =  cur;
            count -= k;
            
        }
        
        return dummy->next;
        
    }
};