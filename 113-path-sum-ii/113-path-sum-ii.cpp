/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>>hehe;
    void tree(TreeNode* root,int t,vector<int>v)
    {
        if(root==NULL)return;
        v.push_back(root->val);
        if(root->left==NULL&&root->right==NULL&&root->val==t)
        {
            hehe.push_back(v);
        }
        tree(root->left,t-root->val,v);tree(root->right,t-root->val,v);
        return;
    }
        
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>v;
        tree(root,targetSum,v);
        return hehe;
        
    }
};