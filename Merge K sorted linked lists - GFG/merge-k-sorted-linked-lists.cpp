// { Driver Code Starts
// C++ program to merge k sorted arrays of size n each
#include <bits/stdc++.h>
using namespace std;

// A Linked List node
struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

/* Function to print nodes in a given linked list */
void printList(Node* node)
{
	while (node != NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
	cout<<endl;
}

 // } Driver Code Ends
/*Linked list Node structure

struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/ 

class Solution{
  public:
    
    Node* mergeTwoLists(Node*l1 , Node*l2){
        if(l1 == NULL) return l2;
        if(l2 == NULL) return l1;
        if(l1->data <= l2->data)
        {
            l1->next = mergeTwoLists(l1->next , l2);
            return l1;
        }
        else
        {
            l2->next = mergeTwoLists(l2->next ,  l1);
            return l2;
        }
    }
    Node * mergeKLists(Node *arr[], int K)
    {
        if( K == 0)
        {
            return NULL;
        }
        
        while(K > 1){
            
            for(int i = 0 ; i < K/2 ; i++)
            {
                arr[i] = mergeTwoLists(arr[i] , arr[K-i-1]);
            }
            K = (K+1)/2;
            
            
        }
        return arr[0];
        
        
           
    }
};



// { Driver Code Starts.
// Driver program to test above functions
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
	   int N;
	   cin>>N;
       struct Node *arr[N];
       for(int j=0;j<N;j++)
        {
           int n;
           cin>>n;

           int x;
           cin>>x;
           arr[j]=new Node(x);
           Node *curr = arr[j];
           n--;

           for(int i=0;i<n;i++)
           {
               cin>>x;
               Node *temp = new Node(x);
               curr->next =temp;
               curr=temp;
           }
   		}
   		Solution obj;
   		Node *res = obj.mergeKLists(arr,N);
		printList(res);

   }

	return 0;
}
  // } Driver Code Ends