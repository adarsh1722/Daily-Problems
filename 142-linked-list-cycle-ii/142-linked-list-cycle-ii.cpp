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
    ListNode *detectCycle(ListNode *head) {
        
        unordered_set<ListNode* > hashSet;
        ListNode* t = head;
        while(t != NULL)
        {
            if(hashSet.count(t)){
                return t;
            }
            hashSet.insert(t);
            t = t->next;
        }
        return NULL;
    }
};