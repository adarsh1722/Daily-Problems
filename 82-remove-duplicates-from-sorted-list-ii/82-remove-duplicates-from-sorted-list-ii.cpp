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
    ListNode* deleteDuplicates(ListNode* head) {
        
        map<int , int>mp;
        ListNode* t = head;
        while(t){
            mp[t->val] += 1 ;
            t = t->next;
        }
        ListNode dummy(0);
        ListNode* ans = &dummy;
        
        // for(auto x : mp)
        //      cout << x.first << " " << x.second << endl;
        
        while(head)
        {
            ListNode* next = head->next;
            if(mp[head->val] == 1)
            {
                
                ans->next = head;
                ans = head;
                head->next = NULL;
                
            }
            head = next;
        }
        
        return  dummy.next;
        
        
        
    }
};