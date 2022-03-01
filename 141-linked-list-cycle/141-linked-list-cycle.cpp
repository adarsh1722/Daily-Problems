
class Solution {
public:
    bool hasCycle(ListNode *head) {
       
        unordered_set<ListNode* >hashSet;
        
        ListNode* t = head;
        while(t != NULL)
        {
            if(hashSet.count(t))
            {
                return true;
            }
            hashSet.insert(t);
            t = t->next;
        }
        return false;
        
    }
};