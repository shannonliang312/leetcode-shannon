/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void swap(int &a, int &b)
    {
        int t = a;
        a = b;
        b = t;
    }

    ListNode * partition(ListNode *start, ListNode *end)
    {
        ListNode *p = start;
        ListNode *q = p->next; 
    
        int pivot = start -> val;
        while(q!= end)
        {
            if(q->val < pivot)
            {
                p = p->next;
                swap(p->val, q->val);
            }
            q=q->next; 
        }
        swap(p->val,start->val);
        return p;
    }

    void quickSort(ListNode *start, ListNode *end)
    {
        if (start == nullptr) return ;
        if(start->next != end && start != end)
        {
            ListNode * mid = partition(start, end);
            quickSort(start, mid);
            quickSort(mid->next, end);
        }   
    } 

    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *pIt = l1;

        while((pIt != nullptr) && (pIt -> next != nullptr)) {
            pIt = pIt -> next;
        }
        if (pIt) {
            pIt -> next = l2;
            pIt = l1;
        } else {
            pIt = l2;
        }
        
        if (pIt == nullptr) return nullptr;

        quickSort(pIt, nullptr);

        return pIt;

        // 递归    
        // if (l1 == null) {
        //     return l2;
        // } else if (l2 == null) {
        //     return l1;
        // } else if (l1.val < l2.val) {
        //     l1.next = mergeTwoLists(l1.next, l2);
        //     return l1;
        // } else {
        //     l2.next = mergeTwoLists(l1, l2.next);
        //     return l2;
        // }
    }
};
// @lc code=end

