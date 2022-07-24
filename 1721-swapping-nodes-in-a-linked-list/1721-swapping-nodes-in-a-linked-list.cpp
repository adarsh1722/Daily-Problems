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
    ListNode* swapNodes(ListNode* head, int k) {
        
        if(!head || !head->next){
            return head;
        }
        vector<int>arr;
        int n = 0 ;
        ListNode* t = head;
        while(t){
            arr.push_back(t->val);
            t = t->next;
            n++;
        }
        
        k -= 1;
        swap(arr[k] , arr[n - k - 1]);
        
        t  = head;
        int i = 0 ;
        while(t){
            t->val = arr[i++];
            t = t->next;
        }
        return head;
    }
};