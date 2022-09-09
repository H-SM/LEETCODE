#include<bits/stdc++.h>
#include<iostream>
using namespace std;
/*
 * @lc app=leetcode id=412 lang=cpp
 *
 * [412] Fizz Buzz
 */

// @lc code=start
class Solution {
public:
vector<string> fizzBuzz(int n) {
    vector<string> arr;
  long long   int i=1;
    while(i<=n){
        if ((i%3==0) && (i%5==0)){
            arr.push_back("FizzBuzz");
        }
        else if((i%3==0)){
            arr.push_back("Fizz");
        }
         else if((i%5==0)){
            arr.push_back("Buzz");
        }
         else {
            arr.push_back(to_string(i));
        }
        
        i++;
    }
    return arr;
}
};
