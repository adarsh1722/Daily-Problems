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
    ListNode* insertionSortList(ListNode* head) {
        
        if(!head){
            return NULL;
        }
        
        vector<int>temp;
        ListNode* t = head;
        while(t){
            temp.push_back(t->val);
            t = t-> next;
        }
        sort(temp.begin(), temp.end());
        t = head;
        int i = 0;
        while(t){
            t->val = temp[i++];
            t = t->next;
        }
        return head;
        
        
    }
};