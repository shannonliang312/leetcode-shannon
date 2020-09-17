/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

#include <string>
#include <unordered_map>
#include <stack>
using namespace std;

// @lc code=start

/*
    考虑使用栈的思路
*/
class Solution {
public:
    bool isValid(string s) {
        int length = s.size();
        if (length % 2 != 0) return false;
        unordered_map<char, char> pairs = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };
        stack<char> stk;
        for (char ch: s) {
            if (pairs.count(ch)) {
                if (stk.empty() || stk.top() != pairs[ch]) {
                    return false;
                }
                stk.pop();
            }
            else {
                stk.push(ch);
            }
        }
        return stk.empty();
    }
};
// @lc code=end

