class Solution {
public:
    
    bool ispallendrome(string s , int low , int high)
    {
        while(low < high)
        {
            if(s[low] != s[high])
            {
                return false;
            }
            low++;
            high--;
        }
        return true;
        
    }
    bool validPalindrome(string s) {
        
        
        int i = 0 , j = s.length()-1;
        while(i<j)
        {
            if(s[i] != s[j])
            {
                return ispallendrome(s , i+1 , j) || ispallendrome(s , i , j-1);
            }
            i++;
            j--;
        }
        return true;
        
    }
};