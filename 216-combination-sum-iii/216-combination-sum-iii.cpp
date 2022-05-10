class Solution {
public:
    vector<vector<int>>res;
    void f(int start , int end , int n , int k , vector<int> contri)
    {
        // Base Case
        // positive base case
        if( n == 0 && k == 0)
        {
            res.push_back(contri);
            return;
        }
        if(n == 0 || k == 0 || n < 0)
        {
            return ;
        }
        
        if(start > end)
            return ;
        
        
        
        // Recursive Step
        // c1
        f(start + 1 , end , n , k , contri);
        
        // c2
        contri.push_back(start);
        f(start + 1 , end , n-start , k - 1, contri );
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        
        f(1 , 9 ,  n , k  , {});
        return res;
        
    }
};