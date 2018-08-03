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
    vector<vector<int> > pathSum(TreeNode *root, int sum) {
        vector<vector<int>> dp;
        vector<int> path;
        getPath(root,sum,dp,path);
        return dp;
    }
    void getPath(TreeNode *root, int sum,vector<vector<int>>& dp,vector<int> path){
        if(NULL == root) return;
        path.push_back(root->val);
        if(NULL == root->left && NULL == root->right && root->val == sum )
            dp.push_back(path);
        getPath(root->left,sum - root->val,dp,path);
        getPath(root->right,sum - root->val,dp,path);
    }
};