/*
 * @lc app=leetcode.cn id=38 lang=cpp
 *
 * [38] 外观数列
 */
#include <string>
using namespace std;

// @lc code=start
class Solution {
public:
    string countAndSay(int n) {
        if (n == 1) {
            return "1";
        }

        if (n == 2) {
            return "11";
        }

        string s = countAndSay(n - 1); // 关键一步：假设已经得到上一次的结果
        int i = 0;
        int j = 1;
        string res = "";
        int size = s.length();
        char *ps = new char[size + 1];
        snprintf(ps, size + 1, "%s", s.c_str());

        while (true) {
            if (ps[i] != ps[j]) {
                res += to_string(j - i) + ps[i];
                if (j != size - 1) {
                    i = j;
                    j++;
                } else {
                    res += to_string(1) + ps[j];
                    break;
                }                
            } else {
                if (j != size - 1) {
                    j++;
                } else {
                    res += to_string(j - i + 1) + ps[j];
                    break;
                }
            }
        }

        delete[] ps; // 注意delete指针时，如果原始指针为数组，则需要加[]

        return res;
    }
};
// @lc code=end

