// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends

class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        if(S.size() == 1){
            return S;
        }
        
        string ans = "";
        
        int n = S.size();
        for(int i = 0 ; i < n - 1 ; i++)
        {
            if(S[i] == S[i+1])
            {
                continue;
            }
            ans += S[i];
        }
        ans += S[n-1];
        return ans;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 



  // } Driver Code Ends