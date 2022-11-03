#include<bits/stdc++.h>
#include<iostream>
using namespace std;
/*
 * @lc app=leetcode id=412 lang=cpp
 *
 * [412] Fizz Buzz
 */

// @lc code=start
/*
class Solution {
public:
vector<vector<int>> generate(int numRows) {
    vector<vector<int>> vec={{1}};
    vector<int> v1={1,1};
    vec.push_back(v1);
    vector<int>v2={};
    for(int q=2;i<numRows;i++){
        v2.clear();
        v2.push_back(1);
       for (int i = 1; i+1 < v1.size(); i++) {
        int x=v1[i-1]+v1[i];
        v2.push_back(x);
    }
    v2.push_back(1);
    v1=v2;
    vec.push_back(v1);
    }
    return vec;
}
};*/
vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ret;
    for(int i=0;i<numRows;i++){
        vector<int> row(i+1,1);
        for(int j=1; j<i;j++)
        row[j]=ret[i-1][j]+ret[i-1][j-1];
        ret.push_back(row);
    }
        /*
    vec.push_back(v1);
    vector<int>v2={};
    for(int q=2;q<numRows;q++){
        v2.clear();
        v2.push_back(1);
       for (int i = 1; i+2 < v1.size(); i++) {
        int x=v1[i-1]+v1[i];
        v2.push_back(x);
    }
    v2.push_back(1);
    v1.insert(v1.end(), v2.begin(), v2.end());
    vec.push_back(v1);
    }
    */
    return ret;
}
int main()
{
   
    vector<vector<int>> x=generate(5);
    for (int i = 0; i < x.size(); i++) {
        for (int j = 0; j < x[i].size(); j++)
            cout << x[i][j] << " ";
        cout << endl;
    }
}
