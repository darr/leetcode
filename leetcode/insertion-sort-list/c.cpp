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
    ListNode* insertionSortList(ListNode* head){
        ListNode* newHead = new ListNode(-1);
        while (NULL != head){
            ListNode* tmp = head->next;
            ListNode* cur = newHead;
            while(cur->next != NULL && cur->next->val < head->val){
                cur = cur->next;
            }
            head->next = cur->next;
            cur->next = head;
            head = tmp;
        }
        return newHead->next;
    }
};