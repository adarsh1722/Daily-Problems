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
        int cnt = 0;
        while(head){
            head = head->next;
            cnt++;
        }
        return cnt;
    }
    ListNode* swapPairs(ListNode* head) {
        
        if(!head){
            return NULL;
        }
        int n = getLength(head);
        n -= 2;
        
        if(n < 0){
            return head;
        }
        
        ListNode *prev = NULL , *curr = head ,*next = NULL;
        int cnt = 1;
        while(curr && cnt <= 2){
            next = curr->next;
            curr->next = prev;
            prev =curr;
            curr = next;
            cnt++;
        }
        
        head->next = swapPairs(curr);
        return prev;
        
        
        
    }
};