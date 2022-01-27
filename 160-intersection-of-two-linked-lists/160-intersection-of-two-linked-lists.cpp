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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        // approach : using high level idea 
        // space: O(1)
        // time :o(n)
        
        // we dont have to find out which one is shorter or longer
        
        ListNode* t1 = headA;
        ListNode* t2 = headB;
        while(t1!=t2)
        {
            if(t1==NULL) t1= headB;
            else if(t2==NULL) t2 = headA;
            else
            {
                t1=t1->next;
                t2=t2->next;
            }
        }
       return t1;
        
    }
};