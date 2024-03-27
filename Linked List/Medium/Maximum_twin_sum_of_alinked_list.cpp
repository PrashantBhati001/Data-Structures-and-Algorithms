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
    int pairSum(ListNode* head) {

        int twin_sum=0;

        ListNode * slow=head;
        ListNode * fast=head;

        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode * curr=slow;
        ListNode * prev= NULL;
        ListNode * forward=NULL;

        while(curr)
        {
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }

        ListNode * head2=prev;

        ListNode * temp1=head;
        ListNode * temp2=head2;

        while(temp1 && temp2)
        {
            int sum=temp1->val+temp2->val;
            twin_sum=max(twin_sum,sum);
            temp1=temp1->next;
            temp2=temp2->next;
        }

        return twin_sum;
       
    }
};