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
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        
        vector<int>v;
        ListNode* t = head1;
        
        while(t)
        {
            v.push_back(t->val);
            t = t->next;
        }
        t = head2;
        while(t)
        {
            v.push_back(t->val);
            t = t->next;
        }
        
        sort(v.begin() , v.end());
        
        ListNode dummy;
        ListNode* tail = &dummy;
        
        for(int i = 0 ; i < v.size() ; i++)
        {
            ListNode *temp = new ListNode(v[i]);
            tail->next = temp;
            tail = temp;
            
        }
        
        return dummy.next;
        
        
    }
};