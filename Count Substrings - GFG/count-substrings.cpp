// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int countSubstr (string S)
	{
	    // your code here
	    int count = 0;
	    for(auto x : S){
	        
	        if(x == '1') count++;
	    }
	    return (count*(count-1))/2;
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
        
        cout << ob.countSubstr (s) << '\n';
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends