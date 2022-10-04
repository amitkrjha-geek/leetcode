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
    int sum=0;
    void t(TreeNode* root,int s)
    {
        if(root==NULL)return;
        if(root->left==NULL&&root->right==NULL)
        {
            s=s*10+root->val;
            sum+=s;
            return;
        }
         s=s*10+root->val;
        t(root->left,s);
        t(root->right,s);
    }
    int sumNumbers(TreeNode* root) {
        t(root,0);
        return sum;
    }
};