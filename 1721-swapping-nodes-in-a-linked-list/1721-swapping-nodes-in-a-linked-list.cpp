
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        
        ListNode* curr1 = head , *curr2 = head;
        int n = 0;
        ListNode* t = head;
        while(t){
            n++;
            t = t->next;
        }
        k -= 1;
        for(int i = 0 ; i < k ; i++){
            curr1 = curr1->next;
        }
        
        for(int i = 0 ; i < n - k - 1 ; i++){
            curr2 = curr2->next;
        }
        
        swap(curr1->val , curr2->val);
        return head;
        
        
    }
};