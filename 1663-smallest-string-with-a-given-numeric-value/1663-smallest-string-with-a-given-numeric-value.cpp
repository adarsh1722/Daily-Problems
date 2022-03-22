class Solution {
public:
    string getSmallestString(int n, int k) {
        
        
        string s;
        s.resize(n);
        for(int i  = 0 ; i < n ; i++){
            s[i] = 'a';
        }
        int rem = k - n;
      
        for(int i = n-1 ; i >= 0 && rem > 0;i--){
            if(rem - 26 >= 0){
                s[i] = 'z';
                rem += 1;
                rem -= 26;
            }
            else{
                rem += 1;
                s[i] = rem + 'a' - 1;
                rem = 0;
            }
        }
        return s;
        
        
    }
};