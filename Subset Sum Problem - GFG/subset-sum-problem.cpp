// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int solve(int i , vector<int>&arr , int sum , vector<vector<int>>&dp){
        
        if(sum == 0) return true;
        if(i == 0 ){
            return arr[0] == sum;
        }
        if(dp[i][sum] != -1) return dp[i][sum];
        
        int notPick = solve(i-1  , arr , sum , dp);
        
        int pick = false;
        if(arr[i] <= sum)
            pick = solve(i-1 , arr , sum- arr[i] , dp);
        
        return dp[i][sum] = pick || notPick;
        
    }
    bool isSubsetSum(vector<int>arr, int sum){
       
       int n = arr.size();
       vector<vector<int>>dp(n , vector<int>(sum+1 , 0));
       
       for(int j = 0 ; j < n ; j++){
           dp[j][0] = true;
       }
       if(arr[0] <= sum)
         dp[0][arr[0]] = true;
        
       for(int i = 1 ; i < n ; i++){
           for(int target = 1 ; target <= sum ; target++){
                int notPick = dp[i-1][target];
        
                int pick = false;
                if(arr[i] <= target)
                    pick = dp[i-1][target- arr[i]];
                
                dp[i][target] = pick || notPick;
                
           }
       }
       
       return dp[n-1][sum];
        
        
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