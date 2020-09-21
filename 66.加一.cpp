/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */
#include <vector>
using namespace std;

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool carryFlag = false; // 进位标志
        for (auto it = digits.rbegin(); it!= digits.rend(); it++) { // 反向遍历
            int tmpRes = *it + 1;
            
            if (tmpRes == 10) { // 需要进位
                carryFlag = true;
                *it = 0;
            } else { // 不需进位
                carryFlag = false;
                *it += 1; 
            }

            if (!carryFlag) break;
        }

        if (carryFlag) {
            digits.insert(digits.begin(), 1); // 如果便利完成，仍有进位标志，则在数组开头插入1
        }

        return digits;
    }
};
// @lc code=end

