/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

// @lc code=start
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        string xs = to_string(x);
        string sig = xs.substr(0, 1);
        if (sig == "-") {
            xs = xs.substr(1, xs.length());
        }
        std::reverse(xs.begin(), xs.end());
        if(sig == "-") {
            xs = sig + xs;
        }

        try {
            return stoi(xs);
        }
        catch (...) {
            return 0;
        }
    }
};
// @lc code=end

