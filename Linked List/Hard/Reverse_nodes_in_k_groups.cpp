#include <bits/stdc++.h>
using namespace std;

 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:

    ListNode * reverse(ListNode * head)
    {
        ListNode * curr=head;
        ListNode * prev=NULL;
        ListNode * forward=NULL;

        while(curr)
        {
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }

        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {

        ListNode * first=new ListNode(-1);
        first->next=head;
        head=first;

        while(first->next)
        {
            int x=k;
            ListNode * second=first->next;
            ListNode * prev=first;
            ListNode * curr=second;
            ListNode * forward=NULL;

            while(x && curr)
            {
                forward=curr->next;
                curr->next=prev;
                prev=curr;
                curr=forward;
                x--;
            }

            if(x!=0)
            {

                second->next=NULL;
                ListNode * temp=reverse(prev);
                first->next=temp;
                break;
            }
            else
            {

                first->next=prev;
                second->next=curr;
                first=second;

            }

        }

        head=head->next;

        return head;
        
    }
};