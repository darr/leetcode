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
    int sumNumbers(TreeNode *root){
        if(NULL == root) return 0;
        int sum = 0;
        sum  = getSum(root,0);
        //getSum2(root,0,sum);
        return sum;
    }
    void getSum2(TreeNode *root, int num, int &sum){
        num = num * 10 + root->val;
        if(NULL == root->left && NULL == root->right){
            sum += num;
            return;
        }
        if(root->left)
            getSum2(root->left, num, sum);
        if(root->right)
            getSum2(root->right, num, sum);
    }
    int getSum(TreeNode* root, int num){
        num = num * 10 + root->val;
        if(NULL == root->left && NULL == root->right)
            return num;
        int sum = 0;
        if (NULL != root->left) sum += getSum(root->left,num);
        if (NULL != root->right) sum += getSum(root->right,num);
        return sum;
    }
};