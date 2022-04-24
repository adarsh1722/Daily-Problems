class Solution {
public:
    double myPow(double x, int n) {
        
         double ans = 1.0;
         int sign=n;
         if(n==0 || x==1)return 1;      
         else{
		 	 if(n<0)
                 n=abs(n);
             //odd
             if(n&1)
                 ans=x*pow(x*x , n/2);
             //even
             else
                 ans=ans*pow(x*x,n/2);
            
         }
         if(sign<0)return 1.0/ans; 
         return ans;
        
        
        
          
        
    }
};