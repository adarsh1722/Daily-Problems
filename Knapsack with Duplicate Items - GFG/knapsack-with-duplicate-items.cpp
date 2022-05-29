// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int f(int i , int w , int val[] , int wt[], vector<vector<int>>&dp ){
        
        if(i == 0){
            return (w/wt[0])*val[0];
           
        }
        if(dp[i][w] != -1) return dp[i][w];
        int notpick = 0 + f(i-1 , w ,val , wt , dp);
        int pick = INT_MIN;
        if(wt[i] <= w){
            pick = val[i] + f(i , w - wt[i] , val , wt , dp);
        }
        return dp[i][w] = max(pick , notpick);
    }
    int knapSack(int N, int W, int val[], int wt[])
    {
        vector<vector<int>>dp(N , vector<int>(W+1 , -1));
        return f(N-1 , W ,val , wt , dp);
        
        for(int w = 0 ; w <= W ;w++){
            dp[0][w] = (w / wt[0])*val[0];
        }
        
        for(int i = 1 ; i< N ; i++){
            for(int w = 0 ; w <= W ; w++){
                int notpick = 0 + dp[i-1][w];
                int pick = INT_MIN;
                if(wt[i] <= w){
                    pick = val[i] + dp[i][w];
                }
                dp[i][w] = max(pick , notpick);
            }
        }
        return dp[N-1][W];
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}  // } Driver Code Ends