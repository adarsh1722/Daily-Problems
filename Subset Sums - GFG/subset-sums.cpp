// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    void solve(int idx , vector<int>&arr , int &curr_sum , vector<int>&ans)
    {
        if(idx == arr.size())
        {
            ans.push_back(curr_sum);
            return;
        }
        
        // pick
        curr_sum += arr[idx];
        solve(idx+1 , arr , curr_sum, ans);
        // not pick
        curr_sum -= arr[idx];
        solve(idx+1 , arr , curr_sum , ans);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
       vector<int>ans;
       int curr_sum = 0;
       solve(0 , arr , curr_sum , ans);
       sort(ans.begin() , ans.end());
       return ans;
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