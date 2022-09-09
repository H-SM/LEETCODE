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
    bool canConstruct(string ransomNote, string magazine) {
        int alphaCount[26] = {0};
        
        for(char ch : magazine) {
            alphaCount[ch - 'a']++;
        }
        
        for(char ch : ransomNote) {
            if(alphaCount[ch - 'a']-- <= 0)
                return false;
        }
        return true;
    }
};
// @lc code=end

