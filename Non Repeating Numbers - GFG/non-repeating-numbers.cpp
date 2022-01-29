// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        int x = nums[0], n = nums.size();
        
        for(int i = 1 ; i < n ; i++)
        {
            x = x^nums[i];
        }
        
        int set_bit_no = x & ~(x-1) , f = 0  , s = 0;
        
        for(int i = 0 ; i < n ; i++)
        {
            if(set_bit_no & nums[i])
            {
                f = f^nums[i];
            }
            else
            {
                s = s^nums[i];
            }
        }
        
        vector<int>ans = {f , s};
        sort(ans.begin() , ans.end());
        return ans;
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends