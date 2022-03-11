// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void dfs(int i , int j , string ds ,vector<vector<int>> &m, int n, vector<vector<int>>&vis , vector<string>&ans  )
    {
        if(i < 0 || j < 0 || i >= n || j >= n ) return;
        if(m[i][j] == 0 || vis[i][j] == 1) return;
        if(i==n-1 && j == n-1){
            ans.push_back(ds);
            return ;
        }
        vis[i][j] = 1;
        dfs(i+1 , j , ds+'D' , m , n , vis , ans);
        dfs(i , j-1 , ds + 'L' ,  m , n , vis , ans);
        dfs(i , j+1 , ds + 'R' , m , n , vis , ans);
        dfs(i-1 , j , ds + 'U', m ,n , vis , ans);
        vis[i][j] = 0;
        
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        
        vector<string>ans;
        vector<vector<int>>vis(n , vector<int>(n , 0));
        if(m[0][0] == 0 || m[n-1][n-1] == 0){
            return ans;
        }
        string ds = "";
        
        dfs(0 , 0 , ds , m , n, vis , ans);
        sort(ans.begin() , ans.end());
        return ans;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends