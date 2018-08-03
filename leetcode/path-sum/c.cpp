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
    bool hasPathSum2(TreeNode *root, int sum) {
        if(NULL == root) return false;
        if(NULL == root->left && NULL == root->right && sum == root->val) return true;
        if(NULL != root->left && hasPathSum(root->left,sum-root->val)) return true;
        if(NULL != root->right && hasPathSum(root->right,sum-root->val)) return true;
        return false;
    }
    
    bool hasPathSum(TreeNode *root, int sum) {
        if(NULL == root) return false;
        if(NULL == root->left && NULL == root->right && sum == root->val) return true;
        return hasPathSum(root->left,sum-root->val) || hasPathSum(root->right,sum-root->val);
    }
};