// { Driver Code Starts
/* Program to split a circular linked list into two halves */


#include<stdio.h> 
#include<stdlib.h> 
 
/* structure for a Node */
struct Node
{
  int data;
  struct Node *next;
  
  Node(int x){
      data = x;
      next = NULL;
  }
}; 

void splitList(struct Node *head, struct Node **head1_ref,   struct Node **head2_ref);
 struct Node* newNode(int key)
{
    struct Node *temp = new Node(key);
    
    return temp;
}
/* Function to split a list (starting with head) into two lists.
   head1_ref and head2_ref are references to head Nodes of 
    the two resultant linked lists */

void printList(struct Node *head)
{
  struct Node *temp = head; 
  if(head != NULL)
  {
    do {
      printf("%d ", temp->data);
      temp = temp->next;
    } while(temp != head);
    printf("\n");
  }
}

 
/* Driver program to test above functions */
int main()
{
  
   int t,n,i,x;
    scanf("%d",&t);
   while(t--)
   {
	   struct Node *temp,*head = NULL;
       struct Node *head1 = NULL;
       struct Node *head2 = NULL;
	   scanf("%d",&n);
	   scanf("%d",&x);
	   head=new Node(x);
	   temp=head;
	   for(i=0;i<n-1;i++){
	   scanf("%d",&x);
	   
	   temp->next=new Node(x);
	   
	   temp=temp->next;
	       
	   }
       
       temp->next=head;
  
       splitList(head, &head1, &head2);
  
     // printf("\nFirst Circular Linked List");
      printList(head1);  
 
     // printf("\nSecond Circular Linked List");
      printList(head2);  
   
   }
  return 0;
}
// } Driver Code Ends


// are pointers to head pointers of resultant two halves.

int getlength(Node* head)
{
    int len = 1;
    Node* t = head;
    while(t->next != head)
    {
        len++;
        t = t->next;
    }
    return len;
}
void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    int len = getlength(head);
    
    int mid = (len+1)/2;
    
    Node* prev = NULL , *curr = head;
    
    for(int  i = 1 ; i <= mid ; i++)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = head;
    
    Node* second = curr;
    
    while(second->next != head)
    {
        second = second->next;
    }
    second->next = curr;
    *head1_ref = head;
    *head2_ref = curr;
    
    
    
}