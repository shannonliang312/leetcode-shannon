/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 实现 strStr()
 */
#include<string>
using namespace std;

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        const char *str1 = haystack.c_str();
        const char *str2 = needle.c_str();
        int size1 = haystack.length();
        int size2 = needle.length();
        
        if (needle == "") return 0;

        for (int i = 0; i < size1; i++) {
            int flag = -1;
            for (int j = 0; j < size2; j++) {
                if (i + j >= size1) return -1;
                if (str1[i + j] != str2[j]) break;
                flag = j;
            }

            if (flag + 1 == size2) return i;
        }

        return -1;
    }
};
// @lc code=end

