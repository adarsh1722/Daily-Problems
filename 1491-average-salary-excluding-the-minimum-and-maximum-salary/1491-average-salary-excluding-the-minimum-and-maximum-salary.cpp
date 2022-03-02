class Solution {
public:
    double average(vector<int>& salary) {
        
        int n = salary.size();
        sort(salary.begin() , salary.end());
        double sum = 0;
        for(int i = 1 ; i<= n-2 ; i++)
        {
            sum += double(salary[i]);
        }
        return (sum)/(n-2);
        
    }
};