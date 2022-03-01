
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        unordered_set<ListNode* >hashSet;
        ListNode* t = headA;
        while(t)
        {
            hashSet.insert(t);
            t = t->next;
        }
        
        t = headB;
        while(t)
        {
            if(hashSet.count(t) == true)
            {
                return t;
            }
            t = t->next;
        }
        return NULL;
        
    }
};