#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int maximumWealth(vector<vector<int>>& accounts) {
        int max=INT_MIN;
        int sum=0;
        for(int i=0;i<accounts.size();i++){
            for(int j=0;j<accounts[i].size();j++){
            sum+=accounts[i][j];
        }
        if(sum>max)
            max=sum;
        sum=0;
        }
    return max;
    }

main(){
    //solving 
    vector<vector<int>>v={{1,2,3},{3,2,1}};
    int x= maximumWealth(v);
    cout<<x<<endl;
    }