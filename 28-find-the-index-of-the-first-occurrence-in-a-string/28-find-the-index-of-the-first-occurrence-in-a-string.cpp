class Solution {
public:
    vector <int> prefix_function(string &s) {
        int n = s.size();
        vector<int>lps(n);
        int len = 0  , i = 1;
        while (i < n) {
            if (s[i] == s[len]) {
                len += 1;
                lps[i] = len;
                i++;
            }
            else {
                if (len > 0)len = lps[len - 1];
                else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
        return lps;
    }
    int strStr(string text, string pat) {
                
        int n = text.size(), m = pat.size();
        vector <int> pi = prefix_function(pat);
        int i = 0, j = 0;
        while (i < n) {
            if (text[i] == pat[j]) {
                i++;
                j++;
                if (j == m) {
                    return i-m;
                    j = pi[j - 1];
                }
            }
            else if (j > 0)
                j = pi[j - 1];
            else {

                i++;
            }
        }
        return -1;
       
    }
};