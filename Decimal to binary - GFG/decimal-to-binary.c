// { Driver Code Starts
//Initial Template for C


#include <stdio.h>

 // } Driver Code Ends
//User function Template for C

void toBinary(int N)
{
    int out = 0;
    int fac = 1;
    while(N>0){
        out += (N%2)*fac;
        // printf("%d\n" , out); 
        
        fac *= 10;
        N /= 2;
        
    }
    printf("%d" , out); 
}

// { Driver Code Starts.

int main() {
	//code
	
	int t;
	scanf("%d", &t);
	
	
	while(t--)
	{
	    int n;
	    scanf("%d", &n);
	    
	    toBinary(n);
	    printf("\n");
	}
	return 0;
}  // } Driver Code Ends