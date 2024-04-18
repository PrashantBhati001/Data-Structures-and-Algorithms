#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node * left;
    Node * right;

    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};


Node * insertintoBST(Node * &root,int target)
{
    if(root==NULL)
    {
        Node * temp=new Node(target);
        return temp;
    }

    if(target>root->data)
    {
        root->right=insertintoBST(root->right,target);
    }
    else{
        root->left=insertintoBST(root->left,target);
    }

    return root;
}
void takeInput(Node * &root)
{
    int data;
    cout<<"Enter the data into the BST"<<endl;
    cin>>data;

    while(data!=-1)
    {
        root=insertintoBST(root,data);
        cin>>data;
    }


}


void inorder(Node * root)
{
    if(root==NULL)
    {
        return ;
    }
    cout<<root->data<<endl;
    inorder(root->left);
    inorder(root->right);
}







int main()
{
    Node * root=NULL;
    cout<<"Enter the data  in the BST"<<endl;
    takeInput(root);
    cout<<"Printing the binary tree formed"<<endl;
    inorder(root);

}