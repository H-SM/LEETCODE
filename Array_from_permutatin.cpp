#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<int> Array_from_permutation(vector<int>& nums) 
{
    vector<int>n;
    for(auto i:nums)
        n.push_back(nums[i]);
    return n;
}

int main()
{
    vector<int> y={0,2,1,5,3,4};
    vector<int> x=Array_from_permutation(y);
    for(auto i:x){
        cout<<i<<" ";
    }
    cout<<endl;
}