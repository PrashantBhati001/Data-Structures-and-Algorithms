//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/* Linked list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};



// } Driver Code Ends
/* Following is the Linked list node structure */

/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution{ 
public:
    void reorderList(Node* head) {
        
        if(head==NULL)
        {
            return ;
        }
        if(head->next==NULL)
        {
            return;
        }
        
        Node * slow=head;
        Node * fast=head;
        Node * previous=NULL;
        
        while(fast and fast->next)
        {
            previous=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        
        previous->next=NULL;
        
        
        Node * prev=NULL;
        Node * forward=NULL;
        Node * curr=slow;
        
        while(curr)
        {
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        
        
        
        Node * head1=prev;
        
        Node * ans=new Node(-1);
        
        Node * tail=ans;
        
        while(head && head1)
        {
            tail->next=head;
            head=head->next;
            tail=tail->next;
            tail->next=NULL;
            
            tail->next=head1;
            head1=head1->next;
            tail=tail->next;
            tail->next=NULL;
            
        }
        
        if(head1)
        {
            tail->next=head1;
        }
        
        head=ans->next;
        
        
        
         
         
    }
};

//{ Driver Code Starts.



/* Function to create a new Node with given data */
struct Node* newNode(int data) {
    struct Node* new_Node = new Node(data);
    new_Node->data = data;
    new_Node->next = NULL;
    return new_Node;
}

void printList(struct Node* Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {

        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void) {
    int t, n, m, i, x;

    cin >> t;
    while (t--) {
        struct Node* temp, *head;
        cin >> n;
        cin >> x;
        head = new Node(x);
        temp = head;
        for (i = 0; i < n - 1; i++) {
            cin >> x;
            temp->next = new Node(x);
            temp = temp->next;
        }
        
        Solution ob;
        
        ob.reorderList(head);
        printList(head);
        freeList(head);
    }
    return 0;
}

// } Driver Code Ends