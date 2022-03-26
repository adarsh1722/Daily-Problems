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
        stack<int>s;
        int c;
        
        for(int i = 0 ; i < n ; i++){
            s.push(i);
        }
        
        while(s.size() > 1){
            int A = s.top();
            s.pop();
            int B = s.top();
            s.pop();
            if(knows(A , B , M)){
                s.push(B);
            }
            else{
                s.push(A);
            }
        }
        
        // if(s.empty()) return -1;
        
        c = s.top();
        s.pop();
        
        
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