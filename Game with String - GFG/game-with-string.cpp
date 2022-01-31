// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        
        unordered_map<char , int>mp;
        priority_queue<int>pq;
        
        for(auto x : s)mp[x]++;
        
        for(auto x :mp) pq.push(x.second);
        
        while(pq.size() > 0 && k--)
        {
            int x = pq.top();
            pq.pop();
            pq.push(--x);
        }
        
        int sum = 0;
        while(pq.size() > 0)
        {
            sum += pow(pq.top() , 2);
            pq.pop();
        }
        return sum;
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}  // } Driver Code Ends