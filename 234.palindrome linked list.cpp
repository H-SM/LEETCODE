#include<bits/stdc++.h>
#include<iostream>
using namespace std;
/*
 * @lc app=leetcode id=412 lang=cpp
 *
 * [412] Fizz Buzz
 */

// @lc code=start
class Solution {
    struct ListNode {
       int val;
       ListNode *next;
       ListNode() : val(0), next(nullptr) {}
       ListNode(int x) : val(x), next(nullptr) {}
       ListNode(int x, ListNode *next) : val(x), next(next) {}
         };
private:
    ListNode* findmiddle(ListNode* head){ 
        if(head==NULL||head->next==NULL){
            return head;
        }
    ListNode* slow =head;
    ListNode* fast =head->next;
    while(fast!=NULL&&fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
private:
    ListNode* reverse(ListNode* head){
        ListNode* pre=NULL;
        ListNode* curr=head;
        while(curr!=NULL){
            ListNode* next=curr->next;
            curr->next=pre;
            pre=curr;
            curr=next;
        }
        return pre;
}


public:
    bool isPalindrome(ListNode* head) {
        //step 1 - find middle
        ListNode* mid = findmiddle(head);
        //step 2 - reverse half 
        mid->next=reverse(mid->next);
        //step 3 - comparing
        ListNode* head1=head;
        ListNode* head2=mid->next;
        while(head2!=NULL){
            if(head1->val!=head2->val){
                return false;
            }
            head1=head1->next;
            head2=head2->next;
        }
        return true;

    }
};