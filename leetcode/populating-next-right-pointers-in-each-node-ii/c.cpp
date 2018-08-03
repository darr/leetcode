/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////


/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
       void connect(TreeLinkNode *root){
        while(root){
            TreeLinkNode L(-1);
            TreeLinkNode *f;
            TreeLinkNode *p;
            f = &L;
            p = root;
            while(p){
                if(p->left != NULL){
                    f->next = p->left;
                    f = f->next;
                }
                if(p->right != NULL){
                    f->next = p->right;
                    f = f->next;
                }
                p = p->next;
            }
            root = L.next;
        }
    }
};