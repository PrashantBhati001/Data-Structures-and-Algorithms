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


Node * buildTree()
{
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;

    if(data==-1)
    {
        return NULL;
    }

    Node * temp=new Node(data);

    temp->left=buildTree();
    temp->right=buildTree();

    return temp;
}


int main()
{
  Node * root =NULL;

  root =buildTree();

  return 0;
}