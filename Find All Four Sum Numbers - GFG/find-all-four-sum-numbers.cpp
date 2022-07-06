// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        
        sort(arr.begin() , arr.end());
        
        vector<vector<int>>ans;
        int n= arr.size();
        if(n < 4){
            return ans;
        }
        
        for(int i = 0 ; i < n ; i++){
            
            for(int j = i + 1 ; j < n ; j++){
                
                int target = k - (arr[i] + arr[j]);
                int low = j+1 , high = n - 1;
                while(low < high){
                    
                    int sum = arr[low] + arr[high];
                    if(sum == target){
                        vector<int>temp ={arr[i] , arr[j] , arr[low] , arr[high]};
                        sort(temp.begin() , temp.end());
                        ans.push_back(temp);
                        
                        int x = arr[low];
                        while(low < high && x == arr[low])low++;
                        x = arr[high];
                        while(low < high && x == arr[high])high--;
                        
                    }
                    else if(sum < target) low++;
                    else high--;
                    
                    
                }
                
                int x = arr[j];
                while(j < n && x == arr[j])j++;
                j -= 1;
                
                
            }
              
            int x = arr[i];
            while(i < n && x == arr[i])i++;
            i -= 1;
        }
        
        sort(ans.begin() ,ans.end());
        return ans;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends