class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& a) {
        
        int n = a.size();
        for(int i =  2 ; i < n ; i++){
            int x1  = a[i-2][0] , x2 =a[i-1][0]  , x3 = a[i][0] , y1 = a[i-2][1] , y2 = a[i-1][1], y3 = a[i][1] ;
            if((x2 - x1)*(y3 - y2) != (x3-x2)*(y2 - y1)){
                return false;
            }
        }
        return true;
        
    }
};