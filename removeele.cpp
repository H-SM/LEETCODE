#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int removeElement(vector<int>& nums, int val) {
    int count=0,j=0,z=nums.size();
    while(j!=z){
        if(nums[j]!=val){
            nums[count]=nums[j];
            count++;
        }
            j++;
    }   
    return count;      
}




int main(){
    vector<string> str={"hello","hehe","he"};
    string x=longestCommonPrefix(str);
    cout<<x<<endl;
}