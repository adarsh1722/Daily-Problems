class Solution {
public:
    int getmin(int mp[]){
         int minn = INT_MAX;
        for(int i = 0 ; i < 26 ; i++)
        {
            if(mp[i] != 0){
                minn = min(minn , mp[i]);
            }
        }
        return minn;
        
    }
    int getmax(int mp[]){
        int maxx = 0;
        for(int i = 0 ; i < 26 ; i++)
        {
            if(mp[i] != 0){
                maxx = max(maxx , mp[i]);
            }
        }
        return maxx;
        
    }
    int beautySum(string s) {
        
        int n = s.size();
        
        int sum  = 0;
        for(int i = 0 ; i < n ; i++)
        {
            int mp[26] ={0};
            
            for(int j = i; j < n ; j++)
            {
                mp[s[j] - 'a'] += 1 ;
                
               sum += getmax(mp) - getmin(mp);
               
               
            }
        }
        return sum;
        
    }
};