/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */

#include <vector>
#include <string>
using namespace std;

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) return "";
        
        int i = 1;
        string ss = "";
        while(true) {
            string ssTmp = strs[0].substr(0, i);
            bool exitFlag = false;
            for(int j = 0; j < strs.size(); j++) {
                if (i > strs[j].size()) return ss;
                if (strs[j].substr(0, i) != ssTmp) {
                    exitFlag = true;
                }
            }

            if (exitFlag == true) {
                return ss;
            } else {
                ss = ssTmp;
                i++;
            }
        }
    }
};
// @lc code=end

