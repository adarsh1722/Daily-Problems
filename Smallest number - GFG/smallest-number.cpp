// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string smallestNumber(int S, int D){
       
       if(S > 9*D){
           return "-1";
       }
       int m = D;
       int res[m] ={0};
       S-=1;
       for(int i = m-1 ; i>0 ; i--)
       {
           if(S >= 9)
           {
               res[i] = 9;
               S -= 9;
           }
           else
           {
               res[i] = S;
               S = 0 ;
           }
       }
       res[0] = S+1;
       
       string ans = "";
       for(int i = 0 ; i< m ; i++)
       {
           ans += to_string(res[i]);
       }
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
        int S,D;
        cin >> S >> D;
        Solution ob;
        cout << ob.smallestNumber(S,D) << endl;
    }
    return 0; 
}   // } Driver Code Ends