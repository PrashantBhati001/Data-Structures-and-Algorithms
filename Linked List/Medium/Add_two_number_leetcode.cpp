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
    
    ListNode * reverse(ListNode * head)
    {
        ListNode * prev=NULL;
        ListNode * curr=head;
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

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        //ListNode * first=reverse(l1);
        //ListNode * second=reverse(l2);
        ListNode * curr1=l1;
        ListNode * curr2=l2;

        ListNode * head=new ListNode(-1);
        ListNode * tail=head;
        int carry=0;

        while(curr1 && curr2)
        {
            int sum=curr1->val+curr2->val+carry;
            int digit=sum%10;
            carry=sum/10;

            tail->next=new ListNode (digit);
            tail=tail->next;
            curr1=curr1->next;
            curr2=curr2->next;

        }

        while(curr1)
        {
            int sum=curr1->val+carry;
            int digit=sum%10;
            carry=sum/10;

            tail->next=new ListNode(digit);
            tail=tail->next;
            curr1=curr1->next;

        }

        while(curr2)
        {
            int sum=curr2->val+carry;
            int digit=sum%10;
            carry=sum/10;

            tail->next=new ListNode(digit);
            tail=tail->next;
            curr2=curr2->next;

        }

        while(carry)
        {
            int digit=carry%10;
            carry=carry/10;
            tail->next=new ListNode(digit);
            tail=tail->next;
        }

        head=head->next;
        return head;

        
    }
};