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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode* t1 = l1 , *t2 = l2;
        ListNode dummy;
        ListNode* tail = &dummy , *head = &dummy;
        
        while(t1 && t2)
        { 
            if(t1->val <= t2->val)
            {
                ListNode* temp = t1->next;
                tail->next = t1;
                t1->next = NULL;
                tail = tail->next;
                t1 = temp;
                
            }
            else
            {
                ListNode* temp = t2->next;
                tail->next = t2;
                t2->next = NULL;
                tail = tail->next;
                t2 = temp;
                
            }
            
        }
        
        if(t1)
            tail->next = t1;
        if(t2)
            tail->next = t2;
        
        return head->next;
        
        
        
        
        
    }
};