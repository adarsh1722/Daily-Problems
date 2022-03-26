// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution 
{
    public:

    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        int i = 0 , j = n-1;
        // why less then j ? because atleast one person should be there
        // for celebrity
        while(i < j){
            
            if(M[j][i])
                j--;
            else
               i++;
            
        }
        
        // why  i ? do dry run on 0 1 2 and you will understand
        int c = i; // assign i as candidate
        
        for(int i = 0 ; i < n ; i++){
            // if he knows any one
            if(M[c][i] == 1){
                return -1;
            }
            // if he is not known by any single person other then himself
            if(i!= c && M[i][c] == 0){
                return -1;
            }
        }
        
        return c;

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