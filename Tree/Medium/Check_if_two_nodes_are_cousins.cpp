//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
// Function to Build Tree
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = new Node(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = new Node(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}

bool isCousins(Node*root , int x , int y);

int main()
{

    int t;
	scanf("%d ",&t);
    while(t--)
    {
        string s;
		getline(cin,s);
        Node* root = buildTree(s);
        int x , y;
        scanf("%d ",&x);
		scanf("%d ",&y);
        if(x==y)
        {
            cout<<"0\n";
            continue;
        }
        cout <<isCousins(root,x,y)<< endl;
    }
    return 1;
}
// } Driver Code Ends


/*Complete the function below
Node is as follows:
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
// Returns true if the nodes with values 'a' and 'b' are cousins. Else returns false


    bool parent(Node * root,int x ,int y)
    {
        if(root==NULL)
        {
            return false;
        }

        if(root->left and root->right)
        {
            if(root->left->data==x and root->right->data==y)
            {
                return true;
            }

            if(root->left->data==y and root->right->data==x)
            {
                return true;
            }
        }

        return parent(root->left,x,y) || parent(root->right,x,y);


    }
    
bool isCousins(Node *root, int x, int y)
{
        int level=0;
        int xlevel=-1;
        int ylevel=-1;

        queue<Node *> q;

        q.push(root);
        q.push(NULL);

        while(!q.empty())
        {
            Node * temp=q.front();
            q.pop();

            if(temp==NULL)
            {

                if(xlevel!=ylevel)
                {
                    return false;
                }

                if(xlevel!=-1)
                {
                    break;
                }
                
                level++;
                
                if(!q.empty())
                {
                    q.push(NULL);
                }
            }

            else
            {
                if(temp->data == x)
                {
                    xlevel=level;
                }

                if(temp->data ==y)
                {
                    ylevel=level;
                }

                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
            }
        }
        
        if(xlevel==-1)
        {
            return false;
        }


        return !parent(root, x,y);
     
     
}