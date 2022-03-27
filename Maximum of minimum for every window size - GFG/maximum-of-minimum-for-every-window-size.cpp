// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to find maximum of minimums of every window size.
    vector <int> maxOfMin(int arr[], int n)
    {
        stack<int>s;
        
        // arrays to store previous and next smaller element
        int left[n+1];
        int right[n+1];
        
        // initialise elements of left[] and right[]
        for(int i = 0 ; i < n ; i++){
            left[i] = -1;
            right[i] = n;
        }
        
        // fill the elements of the left
        for(int i = 0 ; i < n ; i++){
            
            // maintains stack in the increasing fashion
            while(!s.empty() && arr[s.top()] >= arr[i]){
                s.pop();
            }
            
            if(!s.empty()){
                left[i] = s.top();
            }
            s.push(i);
            
            
        }
        
        while(!s.empty()){
            s.pop();
        }
        
        // fill the elements of the right
        // we are iterating backwards because we want to find 
        // out the smaller element on the right side
        for(int i = n - 1 ; i >= 0 ; i--){
            while(!s.empty() && arr[s.top()] >= arr[i]){
                s.pop();
            }
            
            if(!s.empty())
              right[i] = s.top();
            
            s.push(i);
        }
        
        vector<int>ans(n+1 , 0);
        
        for(int i  = 0 ; i < n ; i++){
            int len = right[i] - left[i] - 1;
            ans[len] = max(ans[len] , arr[i]);
        }
        
        for(int i = n- 1 ; i>= 0 ; i--){
            ans[i] = max(ans[i] , ans[i+1]);
        }
        
        vector<int>res(n);
        for(int i  = 1 ; i <= n ; i++){
            res[i-1] = ans[i];
        }
        return res;
        
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        vector <int> res = ob.maxOfMin(a, n);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends