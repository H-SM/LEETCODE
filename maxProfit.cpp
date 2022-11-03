#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int maxProfit(vector<int>& prices) {
        int maxPro=0;
        int minPrice=INT_MAX;
        for (int i=0;i<prices.size();i++){
            minPrice=min(minPrice,prices[i]);
            maxPro=max(maxPro,prices[i]-minPrice);
}
    return maxPro;
}

int main()
{
    vector<int> y={1,2,3,4,5,6,1};
    int x=maxProfit(y);
    cout<<x<<endl;
}