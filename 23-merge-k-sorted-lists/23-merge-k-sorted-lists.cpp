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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        vector<int>ans;
        for(int i = 0 ; i < lists.size() ; i++)
        {
            ListNode* t = lists[i];
            while(t)
            {
                ans.push_back(t->val);
                t = t->next;
            }
        }
        sort(ans.begin() , ans.end());
        ListNode  dummy(0);
        ListNode* nxt = &dummy;
        
        for(int i = 0 ; i < ans.size() ; i++)
        {
            ListNode* temp = new ListNode(ans[i]);
            nxt->next = temp;
            nxt = temp;
        }
        
        return dummy.next;
        
        
    }
};