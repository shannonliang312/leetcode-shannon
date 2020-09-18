/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */
#include <vector>
using namespace std;

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int j = 1;
        int size = nums.size();
        if (size == 0) return 0;
        if (size == 1) {
            if (nums[0] == val) return 0;
            else return 1;
        }

        while (1) {
            if (nums[i] == val) {
                if (j >= size) {
                    return i;
                }
                else {
                    if (nums[j] != val) {
                        nums[i] = nums[j];
                        nums[j] = val;  // 移到前面的元素，将其值赋为val，表示该值已经移到前面了
                        i++;
                        j++;
                    } else {
                        j++;
                    }
                }
            } else {
                i++;
                j++;
                if (i >= size) return i;
            }
        }

        // int i = 0;
        // for (int j = 0; j < nums.length; j++) {
        //     if (nums[j] != val) {
        //         nums[i] = nums[j];
        //         i++;
        //     }
        // }
        // return i;
    }
};
// @lc code=end

