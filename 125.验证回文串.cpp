/*
 * @lc app=leetcode.cn id=125 lang=cpp
 *
 * [125] 验证回文串
 */
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;
// @lc code=start
class Solution {
public:

    bool isPalindrome(string s) {

        s.erase(std::remove_if(s.begin(), s.end(), [](unsigned char c){ return !isalnum(c);}), s.end());
        transform(s.begin(), s.end(), s.begin(),
            [](unsigned char c){ return tolower(c);});
        
        if (s.size() == 0) return true;

        string s2 = s;
        reverse(s2.begin(), s2.end());

        return s == s2;
    }
};
// @lc code=end

