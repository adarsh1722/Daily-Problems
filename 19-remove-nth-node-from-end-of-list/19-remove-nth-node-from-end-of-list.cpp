
class Solution {
public:
    int getLength(ListNode* head)
    {
        int cnt = 0;
        ListNode* temp = head;
        while(temp)
        {
            temp = temp->next;
            cnt++;
        }
        return cnt;
        
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(!head) return NULL;
        int length = getLength(head);
        n = length - n + 1;
        if(n == 1)
        {
            head = head->next;
            return head;
        }
        ListNode* prev  , *curr;
        prev = NULL ; curr = head;
        for(int i= 1 ; i < n ; i++)
        {
            prev =  curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        return head;
        
    }
};