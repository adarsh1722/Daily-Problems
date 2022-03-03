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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head == NULL || head->next == NULL){
            return head;
        }
        
        ListNode* t = head;
        int n = 0;
        while(t){
            n++;
            t = t->next;
        }
        
        k = k%n;
        while(k--)
        {
            ListNode * it = head;
            for(int i = 0 ; i < n-2 ; i++)
            {
                it = it->next;
            }
            ListNode* last = it->next;
            it->next = NULL;
            last->next = head;
            head = last;
        }
        
        return head;
        
    }
};