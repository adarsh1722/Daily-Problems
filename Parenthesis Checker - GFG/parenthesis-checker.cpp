// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
   
    bool ispar(string x)
    {
        
        stack<char>st;
        
        for(int i = 0 ; i < x.length() ; i++)
        {
            if(x[i] == '(' || x[i] == '[' || x[i] =='{'){
                st.push(x[i]);
                continue;
            }
            
            if(st.empty()) return false;
            if(x[i] == ')' && st.top() != '(') return false;
            if(x[i] == '}' && st.top() != '{') return false;
            if(x[i] == ']' && st.top() != '[') return false;
            st.pop();
        }
        
        return st.empty();
        
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends