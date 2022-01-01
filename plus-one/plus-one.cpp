class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
      int n = digits.size() ,  carry = 0 , one =1;
      
      for(int i = n - 1 ; i >= 0 ; i--)
      {
          int d = 0;
          if(one)
          {
              d = digits[i] + one + carry;
              
              one -= 1;
          }
          else
          {
              d = digits[i] + carry;
          }
          
          digits[i] = d%10;
          carry = d/10;
      }
      
     vector<int>temp;
        
    if(carry)
     temp.push_back(1);

     for(auto x : digits)
        temp.push_back(x);
    
    return temp;

        
    }
};