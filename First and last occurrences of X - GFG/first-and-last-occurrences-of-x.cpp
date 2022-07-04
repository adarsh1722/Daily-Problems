// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(vector<int> &a, int n, int x) {
        // Code here
        
        int ele = x;
        int start = 0  , end = a.size() - 1;
    	int first  = -1;
    	while (start <= end) {
    		int mid = (start + end) / 2;
    // 		print("mid is " , mid , a[mid]);
    		if (a[mid] == ele) {
    			first = mid;
    			end = mid - 1;
    		}
    		else if (ele < a[mid]) end = mid - 1;
    		else start  = mid + 1;
    	}
    	start = 0  , end = n-1;
    	int last = -1;
    	while (start <= end) {
    		int mid = (start + end) / 2;
    // 		print("mid is " , mid , a[mid]);
    		if (a[mid] == ele) {
    			last = mid;
    			start = mid + 1;
    		}
    		else if (ele < a[mid]) end = mid - 1;
    		else start  = mid + 1;
    	}
    	
    	if(first == -1) return {-1};
    	return {first ,last};

        
        
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}
  // } Driver Code Ends