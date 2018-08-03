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
    vector<int> postorderTraversal(TreeNode *root){
        if (!root) return {};
        vector<int> res;
        stack<TreeNode*> s{{root}};
        while(!s.empty()){
            TreeNode *t = s.top(); s.pop();
            res.insert(res.begin(),t->val);
            if (t->left) s.push(t->left);
            if (t->right) s.push(t->right);
        }
        return res;
    }
};