#include<bits/stdc++.h>
using namespace std;


class Node{
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


Node * buildTree(Node * root)
{
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;

    if(data==-1)
    {
        return NULL;
    }

    root=new Node(data);

    root->left=buildTree(root->left);
    root->right=buildTree(root->right);

    return root;
}


int main()
{
  Node * root =NULL;

  root =buildTree(root);

  return 0;
}