/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */
#include <vector>
using namespace std;

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size = nums.size();
        if (size == 0) {
            return 0;
        }

        for (int i = 0; i < size; i++) {
            if (nums[i] >= target) {
                return i;
            }
        }

        return size;

        // 二分查找法
        // int n = nums.size();
        // int l=0,r=n-1;
        // while(l<=r){
        //     int mid=l+(r-l)/2;
        //     if(nums[mid]<target)
        //         l=mid+1;
        //     else r=mid-1;
        // }
        // return l;
    }
};
// @lc code=end

