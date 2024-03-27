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
    ListNode* swapNodes(ListNode* head, int k) {

          if(head->next== NULL)
          {
            return head;
          }


          int k_temp=k;
          k_temp--;
          ListNode * start=head;

          while(k_temp)
          {
                start=start->next;
                k_temp--;
          }

          ListNode * first=head;
          for(int i=1;i<=k;i++)
          {
            first=first->next;
          }

          ListNode * second=head;

          while(first)
          {
            first=first->next;
            second=second->next;
          }

          swap(start->val,second->val);

          return head;

        
    }
};