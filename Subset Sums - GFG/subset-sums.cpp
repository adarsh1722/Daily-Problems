// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    void f(int i , int N ,int sum ,  vector<int>&arr , vector<int>&res ){
        if(i >=  N){
            res.push_back(sum);
            return;
        }
        
        // pick
        f(i+1 , N , sum + arr[i] , arr ,res);
        // not pick
        f(i+1 , N , sum  ,arr , res);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        
        vector<int>res;
        f(0 , N , 0  , arr , res );
        return res;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends