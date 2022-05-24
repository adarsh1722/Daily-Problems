// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool f(int ind , vector<int>&arr , vector<vector<int>>&dp , int sum){
        if(sum == 0){
            return true;
        }
        
        if(ind == 0) return arr[ind] == sum;
        
        if(dp[ind][sum] != -1) return dp[ind][sum];
        
        bool nottake = f(ind-1 , arr , dp , sum);
        bool take = false;
        if(sum >= arr[ind])
           take = f(ind-1 , arr , dp , sum - arr[ind]);
        
        return dp[ind][sum] = take || nottake;
        
    }
    bool isSubsetSum(vector<int>arr, int sum){
        
        int n = arr.size();
        vector<vector<int>>dp(n , vector<int>(sum+1 , -1));
        return f(n-1 , arr ,dp , sum);
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends