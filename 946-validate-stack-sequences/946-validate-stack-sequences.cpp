class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i = 0  , j = 0;
        
        for(auto x : pushed){
            pushed[i] = x;
            i+=1;
            while(i > 0 && pushed[i-1] == popped[j]){
                i -= 1;
                j += 1;
            }
        }
        return i == 0;
         
    }
};