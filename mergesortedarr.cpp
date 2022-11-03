#include<bits/stdc++.h>
#include<string.h>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     for(int i=0;i<n;i++){
        nums1[i+m]=nums2[i];
     }
     sort(nums1.begin() , nums1.end());
    }




int main(){
    vector<string> str={"hello","hehe","he"};
    vector<int> nums1={1,2,3,4,5};
    vector<int> nums2={6,7,8,9,10};
    merge(nums1,5,nums2,5);

}