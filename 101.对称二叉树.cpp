/*
 * @lc app=leetcode.cn id=101 lang=cpp
 *
 * [101] 对称二叉树
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
class Solution {
public:
    bool isSymmetricSub(TreeNode *left, TreeNode *right) {
        if ((left == nullptr && right != nullptr) || (left != nullptr && right == nullptr)) {
            return false;
        } else {
            if (!left && !right) {
                return true;
            } else {
                if (left->val == right->val) {
                    return isSymmetricSub(left->left, right->right) && isSymmetricSub(left->right, right->left);
                } else {
                    return false;
                }
            }
        }
    }
    bool isSymmetric(TreeNode* root) {
        if (!root) {
            return true;
        } else {
            return isSymmetricSub(root->left, root->right);
        }
    }
};
// @lc code=end

