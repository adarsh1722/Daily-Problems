// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        vector <int> count (string s)
        {
            //code here.
            int low = 0  , up = 0 , sp = 0 , nu = 0;
            for(auto x : s){
                if(isupper(x)){
                    up++;
                    
                }
                else if(islower(x))low++;
                else if(isdigit(x)) nu++;
                else sp++;
            }
            
            return {up , low , nu , sp};
        }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        vector <int> res = ob.count (s);
        for (int i : res)
            cout << i << '\n';
    }
}

// Contributed By: Pranay Bansal  // } Driver Code Ends