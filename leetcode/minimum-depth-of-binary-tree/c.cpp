/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////

class Solution {
public:
    //run:12ms memory:884k
    int run(TreeNode *root) {
        if (NULL == root) return 0;
        if (NULL == root->left && NULL == root->right) return 1;
        if (NULL == root->left) return run(root->right) + 1;
        else if(root->right == NULL) return run(root->left) + 1;
        else return  min(run(root->left),run(root->right)) + 1;
    }
};