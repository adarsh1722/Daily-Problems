// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    int minimumNumberOfSwaps(string S){
        
        int n = S.size();
        vector<int>v;
        for(int i = 0 ; i < n ; i++)
        {
            if(S[i] == '[')
            v.push_back(i);
        }
        
        int idx= 0 , ans = 0 , cnt = 0;
        for(int i = 0 ; i < n ; i++)
        {
            if(S[i] == '[')
            {
                cnt++, idx++;
            }
            else
            {
                cnt--;
                if(cnt < 0)
                {
                    ans += v[idx] - i;
                    swap(S[i] , S[v[idx]]);
                    cnt = 1;
                    idx += 1;
                }
            }
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
        string S;
        cin >> S;
        Solution ob;
        cout << ob.minimumNumberOfSwaps(S) << endl;
    }
    return 0; 
}   // } Driver Code Ends