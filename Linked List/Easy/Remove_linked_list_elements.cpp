
#include <bits/stdc++.h>
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
    ListNode* removeElements(ListNode* head, int val) {

        if(head==NULL)
        {
            return head;
        }

        if(head->next==NULL)
        {
            if(head->val==val)
            {
                delete head;
                return NULL;
            }
        }

        ListNode * prev=NULL;
        ListNode * curr=head;

        while(curr)
        {
            if(curr->val==val)
            {
                if(prev==NULL)
                {
                    ListNode * temp=curr;
                    curr=curr->next;
                    head=curr;
                    delete temp;
                }
                else
                {
                    prev->next=curr->next;
                    delete curr;
                    curr=prev->next;
                }
                
            }
            else
            {
                prev=curr;
                curr=curr->next;
            }
        }

        if(prev)
        {
            if(prev==head)
            {
                return head;
            }
            else
            {
                return head;
            }
            
        }
        else
        {
            return NULL;
        }
        
    }
};