#include<bits/stdc++.h>
#include<string.h>
using namespace std;
 ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL){
            return NULL;
        }
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast->next!=NULL){

        if(fast->val == slow-> val){
            fast=fast-> next;
        }
        else{
            slow=slow->next;
            slow->val=fast->val;
        }
        }
        slow->next=nullptr;
        return head;
    }



int main(){
    vector<string> str={"hello","hehe","he"};
    vector<int> nums1={9};
    vector<int> nums2={6,7,8,9,10};
    vector<int> ans=plusOne(nums1);
    for(auto i:ans ){
        cout << i<<" ";
    }
    cout<<endl;
}