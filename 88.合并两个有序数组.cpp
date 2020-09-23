/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        auto it2 = nums2.begin();
        nums1.erase(nums1.begin() + m, nums1.end());

        if (m == 0) {
            nums1 = nums2;
            return;
        }

        while (it2 != nums2.end()) {
            nums1.emplace_back(*it2);
            it2++;
        }
        sort(nums1.begin(), nums1.end());

        // while (it2 != nums2.end()) {
        //     auto it1 = nums1.begin();
        //     while(true) {
        //         if (*it1 < *it2) {
        //             it1++;
        //             if (it1 == nums1.end()) break; // 有可能nums1先到结尾
        //         } else {
        //             auto pos = find(nums1.begin(), nums1.end(), *it1);
        //             nums1.emplace(pos, *it2);
        //             it2++;
        //             break;
        //         }
        //     }
        //     if (it1 == nums1.end()) break;
        // }

        // while (it2 != nums2.end()) {
        //     nums1.emplace_back(*it2);
        //     it2++;
        // }

        return;
    }
};
// @lc code=end

