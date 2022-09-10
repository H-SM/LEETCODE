#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<int> arithmeticTriplets(vector<int>& nums) 
{
    nums.insert(nums.end(),nums.begin(),nums.end());
    return nums;
}

int main()
{
    vector<int> y={1,2,3,4,5,6};
    vector<int> x=arithmeticTriplets(y);
    for(auto i:x){
        cout<<i<<" ";
    }
    cout<<endl;
}