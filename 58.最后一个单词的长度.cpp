/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */
#include <string>
using namespace std;

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s == "") return 0;
        int i = 0, j = 0;
        int res = 0;
        int length = s.length();
        char *ps = new char[length + 1];
        snprintf(ps, length + 1, "%s", s.c_str());

        while (true) {
            if (ps[i] == ' ') { // 若当前位置为空格
                if (i == length -1 ) return res; // 且已到末尾，则返回上一个单词的长度
                else i++; // 否则继续查找下一个字符
            } else { // 若当前位置不为空格
                if (i == length - 1) return 1; // 若当前位置为末尾，则说明最后一个单字符，返回1
                else {
                    j = i + 1; // 开始计算单词长度
                    while (true) {
                        if (ps[j] != ' ') { // 当前单词查找未结束
                            if (j == length - 1) return j - i + 1; // 二指针已到末尾，则返回当前单词长度
                            j++;
                        } else { // 当前单词查找结束
                            res = j - i; // 记录当前单词长度
                            i = j; //更新一指针位置，进入下次循环
                            break;
                        }
                    }
                }
            }
        }
    }
};
// @lc code=end

