#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int searchInsert(vector<int>& nums, int T) {
        return search(nums, 0, size(nums)-1, T);
    }
    int search(vector<int> A, int L, int R, int T) {
        if(L > R) return L;
        int mid = (L + R) / 2;
        if(A[mid] == T) return mid;
        if(A[mid] < T) return search(A, mid + 1, R, T);
        return search(A, L, mid - 1, T);
    }

int main(){
    vector<int> str={1,3,5,6};
    int x=searchInsert(str,2);
    cout<<x<<endl;
}