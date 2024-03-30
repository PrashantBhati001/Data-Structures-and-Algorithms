

#include<bits/stdc++.h>
using namespace std;

  //Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {

        if(head== NULL)
        {
            return NULL;
        }

        ListNode * head1=new ListNode(0);
        ListNode * head2=new ListNode(0);

        ListNode * tail1=head1;
        ListNode * tail2=head2;

        ListNode * temp=head;

        while(temp)
        {
            if(temp->val<x)
            {
                tail1->next=temp;
                tail1=tail1->next;
                temp=temp->next;
                tail1->next=NULL;
            }
            else
            {
                tail2->next=temp;
                tail2=tail2->next;
                temp=temp->next;
                tail2->next=NULL;

            }
        }

        tail2=head2;
        head2=head2->next;
        delete tail2;

        tail1->next=head2;

        tail1=head1;

        head1=head1->next;

        delete tail1;

        return head1;


        
    }
};