// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &s) {
       int n = s.size();
       int ans = 0;
       
       for(int i = n-1 ; i>= 0 ; i--)
       {
           if(i-1 >= 0)
           {
               if(s[i-1] == 'I' && s[i] =='V')
               {
                   
                   ans += 4;i-=1;
                   continue;
               }
               if(s[i-1] == 'I' && s[i] =='X')
               {
                   
                   ans += 9;i-=1;
                   continue;
               }
               if(s[i-1] == 'X' && s[i] =='L')
               {
                   
                   ans += 40;i-=1;
                   continue;
               }
               if(s[i-1] == 'X' && s[i] =='C')
               {
                   
                   ans += 90;i-=1;
                   continue;
               }
               if(s[i-1] == 'C' && s[i] =='D')
               {
                   
                   ans += 400;i-=1;
                   continue;
               }
               if(s[i-1] == 'C' && s[i] =='M')
               {
                   
                   ans += 900;i-=1;
                   continue;
               }
               
               
               
           }
           
           if(s[i] == 'I')
                ans += 1;
           if(s[i] == 'V')
                ans += 5;
           if(s[i] == 'X')
                ans += 10;
           if(s[i] == 'L')
                ans += 50;
           if(s[i] == 'C')
                ans += 100;
            else if(s[i] == 'D')
                ans += 500;
            else if(s[i] == 'M')
                ans += 1000;
       }
       
       return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}  // } Driver Code Ends