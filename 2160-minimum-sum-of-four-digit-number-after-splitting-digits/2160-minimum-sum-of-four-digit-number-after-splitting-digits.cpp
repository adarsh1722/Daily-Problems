class Solution {
public:
    int minimumSum(int num) {
        vector<int>v;
        while(num){
            v.push_back(num%10);
            num /= 10;
        }
        sort(v.begin() , v.end());
        int a = v[0] ,b = v[1] , c= v[2] , d = v[3];
        
        int x = (a*10 + c) + (b*10 + d);
        int y = (a*10 + d) + (b*10 + c);
        // cout << x << " " << y;
        return min(x , y);
    }
};