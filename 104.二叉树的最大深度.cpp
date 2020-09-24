/*
 * @lc app=leetcode.cn id=104 lang=cpp
 *
 * [104] 二叉树的最大深度
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#include <algorithm>
using namespace std;

class Solution {
public:
    /*
    * （1）如果一颗树只有一个结点，它的深度是 1；
    * （2）如果根结点只有左子树而没有右子树，那么二叉树的深度应该是其左子树的深度加 1；
    * （3）如果根结点只有右子树而没有左子树，那么二叉树的深度应该是其右树的深度加 1；
    * （4）如果根结点既有左子树又有右子树，那么二叉树的深度应该是其左右子树的深度较大值加 1。
    */
    int maxDepth(TreeNode* root) {
        if (!root) {
            return 0;
        } else {
            int left = maxDepth(root->left);
            int right = maxDepth(root->right);
            return max(left+1, right+1);
        }
    }
};
// @lc code=end

