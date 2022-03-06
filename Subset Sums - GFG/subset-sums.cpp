// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    
    void sum(vector<int>&arr , int i , int N , int curr_sum , vector<int>&ans)
    {
        if(i >= N){
            ans.push_back(curr_sum);
            return;
        }
        
        // we have two choices -
        
        // 1. pick
        sum(arr , i+1 , N ,curr_sum + arr[i] , ans);
        // 2. Not pick
        sum(arr , i+1 , N , curr_sum , ans);
                                
                                
    }
    
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>ans;
        
        sum(arr , 0  , N ,0, ans);
        
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