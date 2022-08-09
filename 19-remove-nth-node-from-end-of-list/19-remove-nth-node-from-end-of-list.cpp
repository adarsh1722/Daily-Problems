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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        
        ListNode* t= head;
        int size = 0;
        while(t){
            t = t->next;
            size++;
        }
        
        n = size - n;
        // base case
        if(n == 0){
            head = head->next;
            return head;
        }
        t = head;
        for(int i = 1 ; i < n ; i++) t= t->next;
        
        // ListNode* x = t->next;
        // delete(x);
        
        t->next = t->next->next;
        return head;
        
        
        
        
    }
};