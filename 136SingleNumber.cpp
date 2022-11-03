#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int singleNumber(vector<int>& nums) {
        unordered_map<int,int> map;
        for(auto i:nums)
         map[i]++;
        for(auto i:map){
            if(i.second==1)
            return i.first;
        }
        return -1;
    }

int main()
{
    vector<int> y={1,2,2,4,4,6,1};
    int x=singleNumber(y);
    cout<<x<<endl;
}