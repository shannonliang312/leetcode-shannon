/*
 * @lc app=leetcode.cn id=83 lang=cpp
 *
 * [83] 删除排序链表中的重复元素
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <iostream>
using namespace std;

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *front = head;
        if (head == NULL) return NULL;

        ListNode *back = head->next;        
        if (back == NULL) return head;

        while(true) {
            if (front->val != back->val) { // 前后相邻值不相等，前指针后移一个
                front->next = back; 
                front = back;
            } else {                    // 前后相邻值相等，前指针next置空
                front->next = NULL;
            }
            back = back->next;          // 后指针后移一个
            if (back == NULL) break;
        }

        return head;
    }
};
// @lc code=end

