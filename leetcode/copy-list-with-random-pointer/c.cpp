/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////

/**
 * Definition for singly-linked list with a random pointer.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
class Solution {
public:
    RandomListNode *copyRandomList(RandomListNode *head) {
        RandomListNode *copy,*p;
        if (!head) return NULL;
        for(p=head;p;p=p->next){
            copy = new RandomListNode(p->label);
            copy->next = p->next; 
            p = p->next = copy;
        }
        for(p=head;p;p=copy->next){
            copy = p->next;
            copy->random = (p->random ? p->random->next:NULL);
        }
        for(p=head,head=copy=p->next;p;){
            p = p->next = copy->next;
            copy = copy->next = (p?p->next:NULL);
        }
        return head;
    }
};