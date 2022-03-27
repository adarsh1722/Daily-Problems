class Solution {
public:
    static bool comparator(pair<int , int>a , pair<int ,int>b){
        
        int val1 , val2 , idx1 , idx2 ;
        val1 = a.first , val2 = b.first , idx1 = a.second, idx2 = b.second;
        if(val1 != val2){
            return val1 < val2;
        }
        else {
            return idx1 < idx2;
        }
        
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        
        vector<pair<int , int>>temp;
        int cnt = 0;
        for(int i = 0 ; i < mat.size() ; i++){
            int cnt =  count(mat[i].begin() , mat[i].end() , 1);
            temp.push_back({cnt , i});
        }
        sort(temp.begin() , temp.end() ,comparator);
        vector<int>ans;
        for(int i = 0 ; i < temp.size() && cnt < k ; i++){
            cnt++;
            ans.push_back(temp[i].second);
        }
        return ans;
        
        
    }
};