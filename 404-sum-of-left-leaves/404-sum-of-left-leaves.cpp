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
    void sum1(TreeNode *root,int &sum,bool left)
    {
        if(!root)return;
        else if(!root->left&& !root->right)
        {  if(left==true)
            sum+=root->val;
        }
        sum1(root->right,sum,false);
        sum1(root->left,sum,true);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        sum1(root,sum,false);
        return sum;
    }
};