#include<bits/stdc++.h>
#include<iostream>
using namespace std;

/*
 * @lc app=leetcode id=1337 lang=cpp
 *
 * [1337] The K Weakest Rows in a Matrix
 */

// @lc code=start
class Solution {
public:
     int lastloc(vector<int>&a){
        int l=0;
        int h=a.size()-1;
        int ans=-1;
        while(l<=h){
            int mid=((h-l)/2)+l;
            //what did he do here???, binary search
            if(a[mid]==1){
                ans=mid;
                l=mid+1;
            }else if(a[mid]<1){
                h=mid-1;
            }
        }
        return ans;
     }

    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
    int n=mat.size();
    priority_queue<pair<int,int>>pq;
    
    for(int i=0;i<n;i++){
        int c=lastloc(mat[i])+1;
        pq.push({c,i});
        if(pq.size()>k)
        {
        pq.pop();
        }
    }
    vector<int> ans;
    
    while(!pq.empty()){
        ans.push_back(pq.top().second);
        pq.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
    }
};
// @lc code=end

