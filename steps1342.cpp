#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n,counter=0;
    cin>>n;
    while(n!=0){
        if(n%2==0){
            n/=2;
            counter++;
        }
        else
        {
            n--;
            counter++;
        }
    }
    cout<<counter<<endl;
    return 0;
}
/*
class Solution {
public:
    int numberOfSteps(int num) {
        int counter=0;
    while(num!=0){
        if(num%2==0){
            num/=2;
            counter++;
        }
        else
        {
            num--;
            counter++;
        }
    }
    return counter;
    }
};*/
