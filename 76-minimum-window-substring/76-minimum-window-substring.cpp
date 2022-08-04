class Solution {
public:
    string minWindow(string str, string pat) {
        int len1 = str.length();
        int len2 = pat.length();
        
        
        int hash_pat[256] = {0};
        int hash_str[256] = {0};
        
        for (int i = 0; i < len2; i++)
        hash_pat[pat[i]]++;
        
        int count = 0;
        int start = 0 ,start_index = -1 , min_len = INT_MAX;
        
        for(int j = 0 ;j < len1 ; j++){
            hash_str[str[j]]++;
            
            if(hash_str[str[j]] <= hash_pat[str[j]]){
                count++;
            }
            // if all the characters are matched
            if(count == len2){
                
                
                
                // agr element hash me jada h ya to vo element pattern me nh h 
                // to aage bdhao usko
                while(hash_str[str[start]] > hash_pat[str[start]] || hash_pat[str[start]] == 0){
                    hash_str[str[start]]--;
                    start++;
                }
                
                int len_window = j - start +1;
                if(min_len > len_window){
                    min_len = len_window;
                    start_index = start;
                }
                
            }
            
            
        }
        
        if(start_index == -1) return "";
        return str.substr(start_index , min_len);
    }
};