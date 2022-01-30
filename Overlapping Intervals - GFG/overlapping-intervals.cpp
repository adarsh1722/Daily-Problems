// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         
         vector<vector<int>>mergedIntervals;
         if(intervals.size() == 0){
             return mergedIntervals;
         }
         
         sort(intervals.begin() , intervals.end());
         
         vector<int>temp = intervals[0];
         
         for(auto pairs : intervals)
         {
             if(pairs[0] <= temp[1])
             {
                 temp[1] =  max(temp[1] , pairs[1]);
             }
             else
             {
                 mergedIntervals.push_back(temp);
                 temp = pairs;
             }
         }
         mergedIntervals.push_back(temp);
         return mergedIntervals;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends