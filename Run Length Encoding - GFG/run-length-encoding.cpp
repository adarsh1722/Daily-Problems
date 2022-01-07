// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string a)
{     
  //Your code here 
  int n = a.size();
  
  int cnt = 1;
  
  string ans = "";
  for(int i = 0 ; i < n-1 ; i++)
  {
      if(a[i] == a[i+1])
      {
          cnt++;
      }
      else
      {
          ans += a[i] + to_string(cnt);
          cnt = 1;
      }
  }
  
  ans += a[n-1] + to_string(cnt);
  
  return ans;
  
  
}     
 
