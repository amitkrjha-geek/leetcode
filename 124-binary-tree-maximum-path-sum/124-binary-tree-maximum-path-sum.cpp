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
    int res=-1000;
    int helper(TreeNode* root)
    {
        if(!root)return 0;
        int a,b,c;
        a=helper(root->left);
        b=helper(root->right);
        c=root->val;
        c=max(c,root->val+b);
        c=max(c,root->val+a);
        res=max(res,c);
        res=max(res,root->val+a+b);
        return c;
    }
    int maxPathSum(TreeNode* root) {
        helper(root);
        return res;
    }
};