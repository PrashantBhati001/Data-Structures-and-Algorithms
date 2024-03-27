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
    
    void reverse(Node * start,Node * end)
    {
        Node * curr=start;
        Node * prev=NULL;
        Node * forward=NULL;

        while(curr!=end)
        {
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        curr->next=prev;
        
    }
    Node* reverseBetween(Node* head, int left, int right)
    {
        
        Node * start=head;
        Node * prev_start=NULL;
        Node * end=head;
        Node * for_end=NULL;

        left--;

        while(left)
        {
            prev_start=start;
            start=start->next;
            left--;
        }

        right--;
        while(right)
        {
            end=end->next;
            right--;
        }

        for_end=end->next;

        reverse(start,end);
        
        if(prev_start!=NULL)
        {
            prev_start->next=end;
            start->next=for_end;
            return head;
        }
        
        else
        {
            start->next=for_end;
            head=end;
            return head;
        }
    }
};

//{ Driver Code Starts.

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



// Driver program to test above functions
int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int N, m, n;
		cin >> N>>m>>n;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < N; i++) {
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

		Node* newhead = ob.reverseBetween(head, m, n);
		printList(newhead);

		cout << "\n";



	}
	return 0;
}

// } Driver Code Ends