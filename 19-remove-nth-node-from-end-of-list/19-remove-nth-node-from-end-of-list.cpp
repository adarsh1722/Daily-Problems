/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getLength(ListNode* head)
    {
        int n = 0;
        ListNode* t = head;
        while(t)
        {
            n++;
            t = t->next;
        }
        return n;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int len = getLength(head);
        
        n = len - n;
        
        // edge case 
        if(n == 0){
            head = head->next;
            return head;
        }
        
        ListNode* current = head;
        for(int i = 1 ; i < n ; i++)
        {
            current = current->next;
        }
        current->next = current->next->next;
        return head;
        
        
    }
};