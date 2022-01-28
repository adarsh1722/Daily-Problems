// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	    void solve(int idx , string &ip , string op , vector<string>&ans)
	    {
	        if(idx ==  ip.size())
	        {
	            ans.push_back(op);
	            return;
	        }
	        solve(idx+1 , ip , op + ip[idx] , ans);
	        solve(idx+1 , ip ,op , ans);
	    }
	    
		vector<string> AllPossibleStrings(string s){
		    
		    vector<string>ans;
		    solve(0 ,s , "" , ans);
		    sort(ans.begin() , ans.end());
		    ans.erase(ans.begin());
		    return ans;
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}  // } Driver Code Ends