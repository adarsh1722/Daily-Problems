// { Driver Code Starts
// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string s)
    {
        stack<int>st;
        
        for(auto x : s)
        {
            if(x >= '0' && x <= '9')
            {
                st.push(x - '0');
            }
            else
            {
                int n2 = st.top();
                st.pop();
                int n1 = st.top();
                st.pop();
                if(x == '+')st.push(n1 + n2);
                else if(x == '-')st.push(n1-n2);
                else if(x == '*')st.push(n1*n2);
                else st.push(n1/n2);
            }
        }
        return st.top();
        
    }
};

// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}
  // } Driver Code Ends