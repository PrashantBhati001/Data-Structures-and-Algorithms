
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
    ListNode* oddEvenList(ListNode* head) {
     

     ListNode * temp=head;
     ListNode * oddhead=new ListNode(-1);
     ListNode * oddtail=oddhead;

     ListNode * evenhead=new ListNode(-1);
     ListNode * eventail=evenhead;

     bool flag=true;//true==odd and false=even


     while(temp)
     {
          if(flag)
          {
            flag=false;
            oddtail->next=temp;
            oddtail=oddtail->next;
            temp=temp->next;
            oddtail->next=NULL;

          }
          else
          {
            flag=true;
            eventail->next=temp;
            eventail=eventail->next;
            temp=temp->next;
            eventail->next=NULL;

          }
     }

     eventail=evenhead;
     evenhead=evenhead->next;
     delete eventail;

     oddtail->next=evenhead;

     oddtail=oddhead;
     oddhead=oddhead->next;
     delete oddtail;

     return oddhead;

        
    }
};