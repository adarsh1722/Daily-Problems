// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    int remove_duplicate(int nums[],int n){
        // code here
        
        int p1 = 0  , p2 = 1;
        while(p2 < n){
            if(nums[p1] == nums[p2]){
                p2++;
            }
            else{
                p1+=1;
                swap(nums[p1] , nums[p2]);
                p2++;
            }
            
        }
        return p1+1;
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}  // } Driver Code Ends