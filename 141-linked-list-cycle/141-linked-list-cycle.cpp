
class Solution {
public:
    bool hasCycle(ListNode *head) {
       
        unordered_set<ListNode* >hashSet;
        
        ListNode* t = head;
        while(t != NULL)
        {
            if(hashSet.find(t) != hashSet.end())
            {
                return true;
            }
            hashSet.insert(t);
            t = t->next;
        }
        return false;
        
    }
};