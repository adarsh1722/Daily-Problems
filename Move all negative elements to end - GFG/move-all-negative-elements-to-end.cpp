// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        
        vector<int>temp;
        int low  = -1;
        for(int i = 0 ; i < n ; i++){
            if(arr[i] > 0) {
                
                arr[++low] = arr[i];
            }
            else{
                temp.push_back(arr[i]);
            }
        }
        for(auto x : temp)arr[++low] = x;
    }
};

// { Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}
  // } Driver Code Ends