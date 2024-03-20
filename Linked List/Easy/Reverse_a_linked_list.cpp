
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
 //Iterative approach
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
         
//          if(head==NULL || head->next==NULL)
//          {
//             return head;
//          }

//          ListNode * prev=NULL;
//          ListNode * curr=head;
//          ListNode * forward=NULL;

//          while(curr)
//          {
//             forward=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=forward;
//          }

//          return prev;


        
//     }
// };


//Recursive approach 

class Solution {
public:
    ListNode * reverse(ListNode* head,ListNode * curr,ListNode * prev)
    {
        if(curr==NULL)
        {
            return prev;
        }

        ListNode * forward=curr->next;
        curr->next=prev;

        return reverse(head,forward,curr);
    }
    ListNode* reverseList(ListNode* head) {

        ListNode * prev=NULL;
        ListNode * curr=head;

        return reverse(head,curr,prev);
        
    }
};