// { Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

 // } Driver Code Ends


class Solution{
    public:
    Node* build(int currentRoot , int inorderStart , int inorderEnd , int pre[] , int in[] , int n ){
        
        if(inorderStart > inorderEnd){
            return  NULL;
        }
        
        // now i know the starting root value of the current tree
        Node* root = new Node(pre[currentRoot]);
        
        // kyunki hme right subtree ki bhi starting node chahiye 
        // or hm pivot se offset calculate kr skte h
        int pivot = 0 ;
        while(in[pivot] != pre[currentRoot]){
            pivot++;
        }
        
        root->left = build(currentRoot + 1 , inorderStart , pivot-1 , pre , in, n);
        
        
        root->right = build(currentRoot + pivot - inorderStart + 1 , pivot+1  , inorderEnd , pre , in , n);
        
        
        return root;
        
        
        
        
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        
        return build(0 , 0 , n - 1 , pre , in , n);
        
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}
  // } Driver Code Ends