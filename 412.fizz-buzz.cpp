/*
 * @lc app=leetcode id=412 lang=cpp
 *
 * [412] Fizz Buzz
 */

// @lc code=start
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<int> str;
        int i=1;
        while(i<=n){
            if(!(i%3)){
                if(!(i%5))
                str.push_back("FizzBuzz");
                else
                str.push_back("Fizz");
            }
            else if(!(i%5))
                str.push_back("Buzz");
            else
                str.push_back(to_string(i));            
            }
            return str;
    }
};
// @lc code=end

