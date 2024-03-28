
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
 

 //Approach-2 Optimized approach O(klogk*N)
class Solution {
public:
   ListNode * merge(ListNode * head1,ListNode * head2)
   {
        ListNode * head=new ListNode(-1);
        ListNode * tail=head;

        while(head1 && head2)
        {
            if(head1->val<=head2->val)
            {
                tail->next=head1;
                tail=tail->next;
                head1=head1->next;
                tail->next= NULL;

            }
            else
            {
                tail->next=head2;
                tail=tail->next;
                head2=head2->next;
                tail->next= NULL;
            }
        }

        if(head1)
        {
            tail->next=head1;
        }
        else
        {
               tail->next=head2;
        }

        return head->next;


   }
    
    void mergesort(vector<ListNode*>& lists,int start,int end)
    {
        if(start<end)
        {
            int mid=start+(end-start)/2;
            mergesort(lists,start,mid);
            mergesort(lists,mid+1,end);
            lists[start]=merge(lists[start],lists[mid+1]);
        }
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        if(lists.size()==0)
        {
            return NULL;
        }

        mergesort(lists,0,lists.size()-1);
        return lists[0];


        
    }
};

//Approach-1 O(k^2*N)

// ListNode * head=arr[0];
// for(int i=1;i<k;i++)
// {
//     head=merge(head,arr[i]);
// }

// return head;