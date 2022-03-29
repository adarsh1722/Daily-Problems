class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        
        sort(piles.rbegin() , piles.rend());
        
        int alice  = 0 , bob = 0;
        for(int i = 0 ; i  < piles.size() ; i++){
            
            if(i %2 == 0) alice += piles[i];
            else bob += piles[i];
            
        }
        
        return alice > bob;
        
    }
};