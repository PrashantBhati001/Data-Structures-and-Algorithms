
#include<bits/stdc++.h>
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
    ListNode* swapPairs(ListNode* head) {


        ListNode * first=new ListNode(-1);
        first->next=head;
        head=first;

        while(first->next)
        {
            ListNode * second=first->next;
            ListNode * prev=first;
            ListNode * curr=second;
            ListNode * forward=NULL;

            int x=2;

            while(x && curr)
            {
                forward=curr->next;
                curr->next=prev;
                prev=curr;
                curr=forward;
                x--;
            }

            first->next=prev;
            second->next=curr;
            first=second;
        }

        head=head->next;
        return head;

        


        
    }
};