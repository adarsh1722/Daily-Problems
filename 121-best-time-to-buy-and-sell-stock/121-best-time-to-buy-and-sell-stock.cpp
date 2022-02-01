class Solution {
public:
    int maxProfit(vector<int>& p) {
        
     // calculate the min so far such that you sell after you baught
        
      int n = p.size();
      int ans = 0;
      int min_so_far = p[0];
      for(int i = 1 ; i < n ; i++)
      {
          int profit= p[i] - min_so_far;
          ans = max(ans , profit);
          min_so_far = min(p[i] , min_so_far);
      }
      
      return ans;
        
    }
};