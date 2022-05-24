class Solution {
public:
    int minimumLines(vector<vector<int>>& st) {
        
        sort(st.begin() , st.end());
        int n = st.size();
        
        if(n == 1){
            return 0;
        }
        
        int cnt = 1;
        
        for(int i = 2 ; i < n ; i++){
            long  x1 = st[i][0] , x2 = st[i-1][0] , x3 = st[i-2][0];
            long y1 = st[i][1] , y2 = st[i-1][1] , y3 = st[i-2][1];
            long diff1 = (y3-y2)*(x2-x1);
            long diff2 = (y2-y1)*(x3-x2);
            if(diff2 != diff1)
                cnt++;
        }
        return cnt;
        
    }
};