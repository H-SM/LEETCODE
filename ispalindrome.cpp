#include<bits/stdc++.h>
#include<string.h>
using namespace std;

bool isPalindrome(int x) {
        string s = to_string(x);
        int i = 0, j = s.size()-1;
        while (i <= j) if (s[i++] != s[j--]) return false;
        return true;
    }
int main(){
    bool x=isPalindrome(10);
    cout<<x<<endl;
}