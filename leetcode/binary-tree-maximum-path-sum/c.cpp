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
    int maxDis;
public:
    int maxPathSum(TreeNode *root) {
        if(!root){
            maxDis=0;
            return -1e8;
        }
        int leftMax=maxPathSum(root->left);
        int l=max(0,maxDis);
        int rightMax=maxPathSum(root->right);
        int r=max(0,maxDis);
        maxDis=max(l,r)+root->val;
        return max(leftMax,max(rightMax,l+r+root->val));
    }
};