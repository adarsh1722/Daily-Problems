
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        int n = 0;
        ListNode* temp = head;
        while(temp)
        {
            n++;
            temp = temp->next;
        }
        
        temp = head;
        
        for(int i = 1; i < n/2+1 ; i++)
        {
          temp = temp->next;
        }
        
        return temp;

        
    }
};