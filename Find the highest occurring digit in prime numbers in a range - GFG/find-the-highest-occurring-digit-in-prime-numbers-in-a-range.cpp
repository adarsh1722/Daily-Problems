// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int maxDigit(int L, int R)  {
        // code here
        
        unordered_map<int , int>hashMap;
        int maxx = INT_MIN , ele  = -1;
        for(int i =   L ; i <= R ; i++){
            
            int temp = i;
            bool flag = true;
            for(int j = 2; j <= sqrt(temp) ; j++){
                if(temp%j  == 0){
                    flag =false;
                    break;
                }
            }
            if(flag == true)
            {
                while(temp > 0){
                    int rem = temp%10;
                    hashMap[rem] += 1;
                    if(hashMap[rem] >= maxx){
                        maxx = hashMap[rem];
                        ele = rem;
                    }
                    temp= temp/10;
                }
            }
            
        }
        
        return ele;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int L, R;
        cin >> L >> R;
        Solution ob;
        cout<<ob.maxDigit(L,R)<<endl;
    }
    return 0;
}
  // } Driver Code Ends