#include<bits/stdc++.h>
#include<string.h>
using namespace std;
 vector<int> plusOne(vector<int>& digits) {
        vector<int> res;
       int length = digits.size();
        int carry = 1;
        int temp;
        for(int i = length - 1; i >= 0; --i)
        {
            temp = digits[i] + carry;
            carry = temp > 9 ? 1 : 0;
            temp %= 10;
            res.push_back(temp);
        }
        if(1 == carry)
        {
            res.push_back(carry);
        }
        reverse(res.begin(), res.end());
        return res;
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