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
    ListNode* detectCycle2(ListNode *head){
        ListNode *fast = head;
        ListNode *slow = head;
        if(head==NULL) return NULL;
        while (NULL != fast){
            if (fast != NULL) fast = fast->next;
            if (fast != NULL) fast = fast->next;
            if (slow != NULL) slow = slow->next;
            while(fast != NULL && slow == fast){
                slow = head;
                while(slow!=fast){
                    fast = fast->next;
                    slow = slow->next;
                }
                return slow;
            }
        }
        return NULL;
    }
    
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast = head;
        ListNode *slow = head;
        if (NULL == head) return NULL;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
            if (fast != NULL && slow == fast)
                return FindTheFirstSameNode(fast,head);
        }
        return NULL;
    }
    
    ListNode *FindTheFirstSameNode(ListNode* head1, ListNode* head2){
        while(head1 != head2){
            head1 = head1->next;
            head2 = head2->next;
        }
        return head1;
    }
};