#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void romantoInt(string s)
{
    map<char,int> roman;
    roman['I']=1;
    roman['V']=5;
    roman['X']=10;
    roman['L']=50;
    roman['C']=100;
    roman['D']=500;
    roman['M']=1000;
    int sum=0;
    char prev=NULL;
    for(auto i : s){
        if(roman[prev]<roman[i]){
            int res=roman[i]-roman[prev];
            sum-=roman[prev];
            sum+=res;
        }
        else sum+=roman[i];
        prev=i;
    }
    cout<<sum<<endl;
}

int main()
{
    
    romantoInt("MCMXCIV");
}