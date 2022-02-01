// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    bool knows(int a, int b ,vector<vector<int> >& M )
    {
        return M[a][b];
    }
 
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int>s;
        for(int i  = 0 ; i < n ; i++)
        {
            s.push(i);
        }
        
        while (s.size() > 1)
        {   int A = s.top();
            s.pop();
            int B = s.top();
            s.pop();
            if (knows(A, B , M))
            {
              s.push(B);
            }
            else
            {
              s.push(A);
            }
        }
        if(s.empty()) return -1;
        
        int c = s.top();
        s.pop();
        
        
        for(int i = 0 ; i < n ; i++)
        {
            if(M[c][i] == 1){
                
                return -1;
            }
        }
        
        for(int i = 0 ; i < n  ;i++)
        {
            if(i != c){
                if(M[i][c] == 0) return -1;
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