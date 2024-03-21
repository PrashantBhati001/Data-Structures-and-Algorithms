
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
    bool isPalindrome(ListNode* head) {

        if(head->next==NULL)
        {
            return true;
        }
         
        ListNode * slow=head;
        ListNode * fast=head->next;

        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode * head2=slow->next;

        slow->next=NULL;

        ListNode * prev=NULL;
        ListNode * curr=head2;
        ListNode * forward=NULL;

        while(curr)
        {
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;

        }

        head2=prev;

        ListNode * temp1=head;
        ListNode * temp2=head2;

        while(temp2)
        {
            if(temp1->val!=temp2->val)
            {
                return false;
            }

            else
            {
                temp1=temp1->next;
                temp2=temp2->next;

            }
        }

        return true;

        
    }
};