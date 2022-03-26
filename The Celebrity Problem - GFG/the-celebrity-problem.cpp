// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    
    bool knows(int i , int j ,vector<vector<int> >& M ){
        return M[i][j];
    }
    
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        int indegree[n] ={0} , outdegree[n] = {0};
        
        for(int i = 0 ; i < n ; i++){
            
            for(int j = 0 ; j < n ; j++){
                
                if(knows(i , j , M)){
                    outdegree[i] += 1;
                    indegree[j] += 1;
                }
                
            }
            
        }
        
        for(int i = 0 ; i < n ; i++){
            if(indegree[i] == n-1 && outdegree[i] == 0){
                return i;
            }
        }
        return -1;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
  // } Driver Code Ends