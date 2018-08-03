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
    vector<int> preorderTraversal(TreeNode *root) {
        if (!root) return {};
        vector<int> res;
        stack<TreeNode*> s{{root}};
        while(!s.empty()){
            TreeNode *t = s.top(); s.pop();
            if (t->right) s.push(t->right);
            if (t->left) s.push(t->left);
            res.insert(res.end(),t->val);
            //res.insert(t->val);
        }
        return res;
    }
};