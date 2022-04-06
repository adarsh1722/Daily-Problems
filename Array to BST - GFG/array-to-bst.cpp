// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    void findPreOrder(int start , int end , vector<int>&nums , vector<int>&ans){
        
        if(start > end){
            return ;
        }
        
        int mid = (start) + (end - start)/2;
        ans.push_back(nums[mid]);
        findPreOrder(start , mid-1 , nums , ans);
        findPreOrder(mid+1  , end , nums , ans);
        
    }
    vector<int> sortedArrayToBST(vector<int>& nums) {
        
        vector<int>ans;
        findPreOrder(0 , nums.size()-1 , nums , ans);
        return ans;
        
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int>ans = obj.sortedArrayToBST(nums);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends