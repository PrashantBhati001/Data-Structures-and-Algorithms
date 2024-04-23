//{ Driver Code Starts
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

Node *constructTree (int [], int );

void printInorder (Node* node)
{
	if (node == NULL)
		return;
	printInorder(node->left);
	printf("%d ", node->data);
	printInorder(node->right);
	

}

int main ()
{   
    int t,n;
   scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int post[n];
        for(int i=0;i<n;i++)
        scanf("%d",&post[i]);

    Node* root = constructTree(post, n);

	printInorder(root);
    printf("\n");
}
	return 0;
}

// } Driver Code Ends


/*struct Node
{
	int data;
	Node *left, *right;
};*/

Node * findanswer(int * post,int lower,int higher,int &index,int &size)
{
    if(index<0 || post[index]<lower || post[index]>higher)
    {
        return NULL;
    }
    
    Node * root=new Node(post[index--]);
    root->right=findanswer(post,root->data,higher,index,size);
    root->left=findanswer(post,lower,root->data,index,size);
    
    return root;
    
    
}

Node *constructTree (int post[], int size)
{
    int index=size-1;
    return  findanswer(post,INT_MIN,INT_MAX,index,size);
     
}