// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int , int>>arr;
        for(int i = 0 ;i < n ; i++){
            arr.push_back({end[i] , start[i]});
        }
        
        sort(arr.begin() , arr.end());
        
        int count = 0 , endTime = INT_MIN;
        
        for(int i = 0 ; i < arr.size() ;i++){
            if(arr[i].second > endTime){
                count++;
                endTime = max(endTime , arr[i].first);
            }
        }
        
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends