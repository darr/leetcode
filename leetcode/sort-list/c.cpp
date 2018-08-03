/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head){
        if (!head||!head->next) return head;
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* pre = head;
        while (fast && fast->next){
            pre = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        pre->next = NULL;
        return merge(sortList(head),sortList(slow));
    }
    ListNode* merge(ListNode* left,ListNode* right){
       ListNode *head;
       if (left->val < right->val){
                head = left;
                left = left->next;
       }else{
                head = right;
                right = right->next;
        }
        ListNode *cur = head;
        while(left && right){
            if (left->val < right->val){
                cur->next = left;
                left = left->next;
            }else{
                cur->next = right;
                right = right->next;
            }
            cur = cur->next;
        }
        if (left) cur->next = left;
        if (right) cur->next = right;
        return head;
    }
    ListNode* merge2(ListNode*left, ListNode* right){
        ListNode* head = new ListNode(-1);
        ListNode* cur = head;
        while(left && right){
            if (left->val < right->val){
                cur->next = left;
                left = left->next;
            }else{
                cur->next = right;
                right = right->next;
            }
            cur = cur->next;
        }
        if (left) cur->next = left;
        if (right) cur->next = right;
        return head->next;
    }
};