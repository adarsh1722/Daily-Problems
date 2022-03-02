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
    void reverse(vector<int>&arr , int start , int end)
    {
        while(start < end){
            swap(arr[start++] , arr[end--]);
        }
    }
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head == NULL){
            return head;
        }
        
        vector<int>arr;
        ListNode* t = head;
        while(t)
        {
            arr.push_back(t->val);
            t = t->next;
        }
        int n = arr.size();
        k = k%n;
        reverse(arr , 0 , n-1);
        reverse(arr , 0 , k-1 );
        reverse(arr , k , n-1);
        
        t = head;
        int i = 0;
        while(t)
        {
            t->val = arr[i++];
            t = t->next;
        }
        return head;
    }
};