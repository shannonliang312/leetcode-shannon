/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 */
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;

        for (int i = 1; i <= numRows; i++) {
            vector<int> iner;
            if (i == 1) {
                iner = {1};
            } else {
                vector<int> lastVec = res[i-2];
                iner.resize(i);
                for (int j = 0; j < i / 2; j++) {
                    if (j == 0) {
                        iner[j] = 1;
                        iner[i - 1 - j] = 1;
                    } else {
                        iner[j] = lastVec[j] + lastVec[j-1];
                        iner[i - 1 - j] = lastVec[j] + lastVec[j-1];
                    }

                    if (i % 2 == 1) {
                        iner[ i / 2 ] = lastVec[i/2] * 2;
                    }
                }
            }

            res.emplace_back(iner);
        }

        return res;
        // vector<vector<int>> res;
        // for(int i=1; i<=numRows; i++){
        //     vector<int> val(i);
        //     val[i-1] = 1;
        //     val[0] = 1;
        //     if(i <= 2){
        //         res.push_back(val);
        //         continue;
        //     }
        //     for(int j=1; j<i-1; j++){
        //         val[j] = res[i-2][j-1] + res[i-2][j];
        //     }
        //     res.push_back(val);
        // }
        // return res;
    }
};
// @lc code=end

