
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
      
        vector<int>temp;
        ListNode* t = head;
        while(t){
            temp.push_back(t->val);
            t = t->next;
        }
        
        int low = left - 1 , high = right - 1;
        while(low < high){
            swap(temp[low++] , temp[high--]);
        }
        
        int i = 0;
        t = head;
        while(t){
            t->val = temp[i++];
            t = t->next;
        }
        
        return head;
        
        
    }
};