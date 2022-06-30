class Solution {
public:
    TreeNode* build(vector<int>nums , int start , int end){
        
        if(start > end) return NULL;
        
        int mid = start + (end- start)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = build(nums , start , mid-1);
        root->right = build(nums , mid+1 , end);
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        
        
        vector<int>nums;
        while(head){
            nums.push_back(head->val);
            head= head->next;
        }
        
        return build(nums , 0 , nums.size()-1);
        
        
    }
};