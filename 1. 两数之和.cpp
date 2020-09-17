/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int count = nums.size();
        vector<int> res;

        for (int i = 0; i < count - 2; i++) {
            int tmp1 = nums[i];
            for (int j = i + 1; j < count; j++) {
                if (nums[i] + nums[j] == target) {
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }
            }
        }

        res.push_back(count - 2);
        res.push_back(count - 1);
        return res;
    }
};
// @lc code=end

