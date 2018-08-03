/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////


/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isBalanced(TreeNode *root) {
        if(NULL == root) 
            return true;
        if(abs(getDeep(root->left) - getDeep(root->right)) > 1)
            return false;
        return isBalanced(root->left) && isBalanced(root->right);
    }
    int getDeep(TreeNode *root){
        if(NULL == root) 
            return 0;
        return max(getDeep(root->left),getDeep(root->right)) + 1;
    }
};