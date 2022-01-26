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
    int length(ListNode* head)
    {
        ListNode* t = head;
        int Len = 0;
        while(t)
        {
            Len++;
            t = t->next;
        }
        return Len;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(!head)
            return NULL;
        
        int listLength = length(head);
        listLength -= k;
        
        if(listLength < 0)
            return head;
                
        ListNode* curr = head;
        ListNode* next = NULL;
        ListNode* prev = NULL;
        
        int cnt = 0 ;
        while(curr != NULL && cnt < k)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            cnt += 1;
        }
        
        head->next = reverseKGroup(next , k);
        
        return prev;
    }
};