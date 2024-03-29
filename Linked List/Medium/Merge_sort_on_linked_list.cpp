
#include<bits/stdc++.h>
using namespace std;

//  Definition for singly-linked list.
 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:

    ListNode * findmid(ListNode * head)
    {

        ListNode * slow=head;
        ListNode *  fast=head->next;

        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }

        return slow;


    }

    ListNode * merge(ListNode * left ,ListNode * right)
    {
        ListNode * head=new ListNode(-1);
        ListNode * tail=head;

        while(left && right)
        {
            if(left->val<=right->val)
            {
                tail->next=left;
                tail=tail->next;
                left=left->next;
                tail->next=NULL;
            }
            else
            {
                tail->next=right;
                tail=tail->next;
                right=right->next;
                tail->next=NULL;

            }
        }

        if(left)
        {
            tail->next=left;
        }
        else
        {
            tail->next=right;
        }

        return head->next;
    }

    ListNode * mergesort(ListNode * head)
    {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }

        ListNode * mid=findmid(head);

        ListNode * left=head;
        ListNode * right=mid->next;

        mid->next=NULL;

        left=mergesort(left);
        right=mergesort(right);
        ListNode * ans=merge(left,right);

        return ans;

    }
    ListNode* sortList(ListNode* head) {

        return mergesort(head);
        
    }
};