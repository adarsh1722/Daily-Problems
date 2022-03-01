
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        vector<int>temp;
        
        ListNode* t = head;
        while(t)
        {
            temp.push_back(t->val);
            t = t->next;
        }
        
        int i = 0 , j = temp.size() - 1;
        
        while(i < j)
        {
            if(temp[i] != temp[j])
            {
                return false;
            }
            i += 1;
            j -= 1;
            
        }
        return true;
        
    }
};