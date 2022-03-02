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
    int getLength(ListNode* head){
        int n = 0;
        ListNode* t = head;
        while(t)
        {
            n++;
            t = t->next;
        }
        return n;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(!head){
            return NULL;
        }
        
        int listLength = getLength(head);
        
        listLength -= k;
        
        if(listLength < 0){
            return head;
        }
        
        ListNode* current = head , *prev = NULL , *next;
        int cnt = 1;
        while(cnt <= k && current != NULL)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
            
            cnt += 1;
        }
        
        head->next = reverseKGroup(next ,   k);
        
        return prev;
        
        
        
        
        
    }
};