#include<bits/stdc++.h>
using namespace std;

  struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        //Approach-1
        if(head== NULL)
        {
            return head;
        }

        int count=0;

        ListNode * temp=head;

        while(temp)
        {
            count++;
            temp=temp->next;
        }

        count=count-n;

        if(count==0)
        {
            ListNode * temp=head;
            head=head->next;
            delete temp;
            return head;
        }

        ListNode * curr=head;
        ListNode * prev=NULL;

        while(count--)
        {
            prev=curr;
            curr=curr->next;
        }

        prev->next=curr->next;
        delete curr;

        return head;

        
    }
};


//Approach-2

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL)
        {
            return head;
        }

        ListNode * first=head;

        for(int i=1;i<=n;i++)
        {
            if(first==NULL)
            {
                return head;

            }

            first=first->next;
        }

        ListNode * second=head;
        ListNode * prev=NULL;

        while(first)
        {

            prev=second;
            first=first->next;
            second=second->next;
        }

        if(second==head)
        {
            head=head->next;
            delete second;
            return head;
        }

        prev->next=second->next;
        delete second;
        return head;
        
    }
};