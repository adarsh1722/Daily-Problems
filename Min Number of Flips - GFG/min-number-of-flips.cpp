// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}
// Contributed By: Pranay Bansal
// } Driver Code Ends


int getMin(string s , char x)
{
    int cnt = 0 , n = s.size() ;
    if(x == '0')
    {
        for(int i = 0 ;i < n ; i++)
        {
            if(i %2 == 0 && s[i] != '0')
            cnt += 1;
            else if(i & 1 && s[i] != '1')
            cnt += 1;
            
        }
    }
    else
    {
        for(int i = 0 ;i < n ; i++)
        {
            if(i %2 == 0 && s[i] != '1')
            cnt += 1;
            else if(i & 1 && s[i] != '0')
            cnt += 1;
            
        } 
    }
    return cnt;
}

int minFlips (string S)
{
   int n = S.size();
   return min(getMin(S , '0') , getMin(S , '1'));
   
}