class Solution {
public:
    int minSwaps(string s) {
        
        int mismatch = 0;
        for(auto x : s)
        {
            if(x == '[')
            {
                mismatch++;
            }
            else
            {
                if(mismatch > 0)
                    mismatch-=1;
            }
        }
        return  (mismatch + 1) >> 1;
        
    }
};