#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int removeDuplicates(vector<int>& nums) {
    int len = nums.size(), i, j; 

	for(i = 0, j = 1; j < len; ++j) {
		if(nums[i] != nums[j])
			nums[++i] = nums[j]; 
	}

	return i + 1; 
    }




int main(){
    vector<string> str={"hello","hehe","he"};
    string x=longestCommonPrefix(str);
    cout<<x<<endl;
}