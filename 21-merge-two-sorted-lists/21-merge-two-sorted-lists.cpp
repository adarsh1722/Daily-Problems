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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       
        vector<int>arr;
        ListNode* t = list1;
        
        while(t){
            arr.push_back(t->val);
            t = t->next;
            
        }
        t = list2;
        while(t){
            arr.push_back(t->val);
            t = t->next;
            
        }
        sort(arr.begin()  , arr.end());
        ListNode* dummy =  new ListNode();
        ListNode* tail = dummy;
        
        for(auto x : arr){
            tail->next = new ListNode(x);
            tail = tail->next;
        }
        return dummy->next;
        
        
        
    }
};