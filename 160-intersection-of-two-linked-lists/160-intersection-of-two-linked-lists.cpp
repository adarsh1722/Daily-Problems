/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int countNodes(ListNode *head)
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        if(!headA || !headB) return NULL; 
        
        int n1 = countNodes(headA);
        int n2 = countNodes(headB);
        
        int diff = abs(n1 - n2);
        
        ListNode* t1 = headA , *t2 = headB;
        
        if(n1 > n2)
        {
            for(int i = 0 ; i < diff ; i++)
                t1 = t1->next;
        }
        else
        {
            for(int i = 0 ; i < diff ; i++)
                t2 = t2->next;
        }
        
        while(t1 != t2)
        {
            t1 = t1->next;
            t2 = t2->next;
        }
        return t1;
        
    }
};