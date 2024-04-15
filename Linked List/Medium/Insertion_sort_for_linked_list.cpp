//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}




// } Driver Code Ends
//User function Template for C++

/*Link list node
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    public:
    
    void insertcorrectposition(Node * curr,Node * newhead)
    {
        Node * prev=NULL;
        Node * temp=newhead;
        int target=curr->data;

        while(temp)
        {
            if(temp->data<target)
            {
                prev=temp;
                temp=temp->next;
            }
            else
            {

                prev->next=curr;
                curr->next=temp;
                return ;

            }
        }

        prev->next=curr;
        curr->next=temp;
        return;
    }
    
    
    Node* insertionSort(struct Node* head)
    {
             if(head==NULL)
        {
            return NULL;
        }

        Node * newhead=new Node(INT_MIN);
        
        Node * curr=head;
        Node * forward=NULL;

        while(curr)
        {
            forward=curr->next;

            insertcorrectposition(curr,newhead);

            curr=forward;
        }

        return newhead->next;
        
    }
    
};

//{ Driver Code Starts.
int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int n;
		cin >> n;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < n; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

        Solution ob;

		head = ob.insertionSort(head);
		printList(head);

		cout << "\n";



	}
	return 0;
}
// } Driver Code Ends