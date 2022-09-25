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
        if(!head || !head->next || k == 0){
            return head;
        }
        ListNode* prev = NULL , *start  = head , *t = head;
        int len = 0;
        while(t){
            len+=1;
            prev = t;
            t = t->next;
        }
        // int len = getLength(head , prev);
        k = k %len;
        if(k == 0){
            return head;
        }
        
        for(int i = 1 ; i < len - k;i++){
            head = head->next;
        }
        ListNode* newHead = head->next;
        head->next = NULL;
        prev->next = start;
        return newHead;
        
        
    }
};