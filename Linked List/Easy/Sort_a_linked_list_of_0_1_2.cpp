//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;


// } Driver Code Ends
/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        int czero=0;
        int cone=0;
        int ctwo=0;
        
        Node * curr=head;
        while(curr)
        {
            if(curr->data==0)
            {
                czero++;
            }
            else if(curr->data==1)
            {
                cone++;
            }
            else
            {
                ctwo++;
            }
            
            curr=curr->next;
        }
        
        curr=head;
        while(czero)
        {
            curr->data=0;
            czero--;
            curr=curr->next;
        }
        
        while(cone)
        {
            curr->data=1;
            cone--;
            curr=curr->next;
        }
        
        while(ctwo)
        {
            curr->data=2;
            ctwo--;
            curr=curr->next;
        }
        
        return head;
        
    }
};


//{ Driver Code Starts.

// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
void insert(int n1) {
    int n, value, i;
    // scanf("%d",&n);
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {

    int n;

    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        insert(n);
        Solution ob;
        struct Node *newHead = ob.segregate(start);
        printList(newHead);
    }

    return 0;
}
// } Driver Code Ends


// Node* segregate(Node *head) {
        
//         Node * headzero=new Node(-1);
//         Node * tailzero=headzero;
//         Node * headone=new Node(-1);
//         Node * tailone=headone;
//         Node * headtwo=new Node(-1);
//         Node * tailtwo=headtwo;
        
//         Node * curr=head;
        
//         while(curr)
//         {
//             if(curr->data==0)
//             {
//                 tailzero->next=curr;
//                 curr=curr->next;
//                 tailzero=tailzero->next;
//                 tailzero->next=NULL;
//             }
//             else if(curr->data==1)
//             {
//                 tailone->next=curr;
//                 curr=curr->next;
//                 tailone=tailone->next;
//                 tailone->next=NULL;
//             }
//             else
//             {
//                 tailtwo->next=curr;
//                 curr=curr->next;
//                 tailtwo=tailtwo->next;
//                 tailtwo->next=NULL;
//             }
//         }
        
//         if(headone->next)
//         {
//             tailzero->next=headone->next;
//             tailone->next=headtwo->next;
            
//         }
//         else
//         {
//             tailzero->next=headtwo->next;
//         }
//         headzero=headzero->next;
//         return headzero;
      
//     }