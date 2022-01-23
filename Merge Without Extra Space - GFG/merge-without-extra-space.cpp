// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    
	    int gap = ceil((float)(n + m) / 2);
	    
	    while(gap > 0)
	    {
	        int i = 0 , j = gap;
	        while(j < (n + m))
	        {
	            if(j < n && arr1[i] > arr1[j] ){
	                swap(arr1[i] , arr1[j]);
	            }
	            else if( j>= n && i < n && arr1[i] > arr2[j-n]){
	                swap(arr1[i] , arr2[j-n]);
	            }
	            else if(j >= n && i >= n && arr2[i -n ] > arr2[j-n]){
	                swap(arr2[i - n ], arr2[j - n]);
	            }
	            i+=1;
	            j+=1;
	        }
	        
	        if (gap == 1) {
              gap = 0;
            } else {
              gap = ceil((float) gap / 2);
            }
	    }
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends