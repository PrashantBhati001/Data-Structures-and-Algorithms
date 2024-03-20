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
    ListNode* rotateRight(ListNode* head, int k) {

        if(head==NULL)
        {
            return head;
        }
        ListNode * temp=head;
        int count=0;

        while(temp)
        {
            count++;
            temp=temp->next;
        }

        k=k%count;

        ListNode * temp_end=head;

        while(temp_end->next)
        {
            temp_end=temp_end->next;
        }

        temp=head;

        int x=count-k;
        x--;
        while(x--)
        {
            temp=temp->next;
        }

        temp_end->next=head;
        head=temp->next;
        temp->next=NULL;

        return head;


    }
};