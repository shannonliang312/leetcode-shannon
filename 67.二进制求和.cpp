/*
 * @lc app=leetcode.cn id=67 lang=cpp
 *
 * [67] 二进制求和
 */
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// @lc code=start
class Solution {
public:
    string addBinary(string a, string b) {
        int maxLength = max(a.length(), b.length());
        string tmpA = a;
        string tmpB = b;
        bool carryFlag = false;
        string res = "";
        
        if (a.length() < maxLength) {
            for (int i = 0; i < maxLength - a.length(); i++) {
                tmpA = "0" + tmpA;
            }
        }
        if (b.length() < maxLength) {
            for (int i = 0; i < maxLength - b.length(); i++) {
                tmpB = "0" + tmpB;
            }
        }

        for (int i = maxLength - 1; i >= 0; i--) {
            int intA = tmpA[i] - '0';
            int intB = tmpB[i] - '0';
            int carry = carryFlag ? 1 : 0;
            int tmpSum = intA + intB + carry;
            if (tmpSum >= 2) {
                carryFlag = true;
                res = tmpSum == 2 ? ("0" + res) : ("1" + res);
            } else {
                carryFlag = false;
                char tmp = tmpSum + '0';
                res = tmp + res;
            }
        }

        res = carryFlag ? "1" + res : res;

        return res;
        // string ans;
        // reverse(a.begin(), a.end());
        // reverse(b.begin(), b.end());

        // int n = max(a.size(), b.size()), carry = 0;
        // for (size_t i = 0; i < n; ++i) {
        //     carry += i < a.size() ? (a.at(i) == '1') : 0;
        //     carry += i < b.size() ? (b.at(i) == '1') : 0;
        //     ans.push_back((carry % 2) ? '1' : '0');
        //     carry /= 2;
        // }

        // if (carry) {
        //     ans.push_back('1');
        // }
        // reverse(ans.begin(), ans.end());

        // return ans;
    }
};
// @lc code=end

