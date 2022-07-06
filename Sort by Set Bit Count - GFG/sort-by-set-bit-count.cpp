// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    static bool cmp(int a , int b){
        
       int cnt_a = 0 , cnt_b = 0;
       while(a > 0)
       {
           ++cnt_a;
           a = a&(a-1);
       }
       
       while(b > 0)
       {
           ++cnt_b;
           b = b&(b-1);
       }
       
       if(cnt_a != cnt_b)
        return cnt_a > cnt_b;
       return a < b;
    }
    void sortBySetBitCount(int arr[], int n)
    {
       stable_sort(arr , arr + n , cmp);
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        ob.sortBySetBitCount(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends