class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       
        if(!head || !head->next) return NULL;
        
//         ListNode* start = new ListNode();
//         start->next = head;
        ListNode *fast = head , *slow = head;
        
        for(int i = 1 ; i <= n ; i++)
            fast = fast->next;
        
          
        if(!fast) return head->next;
        
        while(fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next;
        }
      
        
        slow->next = slow->next->next;
        return head;
        
        
        
    }
};