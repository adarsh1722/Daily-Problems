// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	    void helper(string ip , string op , vector<string>&ans)
	    {
	        if(ip.size() == 0)
	        {
	            ans.push_back(op);
	            return;
	        }
	        else
	        {
	            string x , y;
	            for(int i = 0 ; i< ip.size() ; i++)
	            {
	                y = op;
	                y += ip[i];
	                x = ip;
	                x.erase(x.begin() + i);
	                helper(x , y , ans);
	                
	                
	            }
	        }
	    }
		vector<string>find_permutation(string S)
		{
		 
		    vector<string>ans;
		    helper(S , "", ans);
		    sort(ans.begin() , ans.end());
		    return ans;
		    
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends