class Solution {
public:
    int beautySum(string s) {
        
        int n = s.size();
        
        int sum  = 0;
        for(int i = 0 ; i < n ; i++)
        {
            int mp[26] ={0};
            for(int j = i; j < n ; j++)
            {
                mp[s[j]-'a'] += 1 ;
                               
                int maxx = INT_MIN , minn = INT_MAX;
                
                 for(int i = 0 ; i < 26 ; i++)
                 {
                     if(mp[i] > 0){
                         
                         maxx = max(maxx , mp[i]);
                         minn = min(minn , mp[i]);
                         
                     }
                 }
                // cout << maxx << " "<< minn << endl;
                sum += (maxx - minn);
                
               
            }
        }
        return sum;
        
    }
};