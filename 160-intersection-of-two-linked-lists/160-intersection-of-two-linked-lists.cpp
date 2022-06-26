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
    int getLength(ListNode* head){
        int len = 0;
        ListNode* t = head;
        while(t){
            t = t->next;
            len+=1;
        }
        return len;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        int n1 = getLength(headA);
        int n2 = getLength(headB);
        
        if(n1 > n2){
            swap(headA , headB);
        }
        int n = abs(n1 - n2);
        while(n--){
            headB = headB->next;
        }
        
        while(headA != headB){
            headA = headA->next;
            headB = headB->next;
        }
        return headA;
        
        
    }
};