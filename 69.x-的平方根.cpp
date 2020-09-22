/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) return 0;
    
        unsigned int i = 1;
        
        while (true) {
            if ((i * i <= x) && ((i+1) * (i+1) > x)) {
                break;
            } else {
                i++;
            }
        }

        return i;
    }
};
// @lc code=end

