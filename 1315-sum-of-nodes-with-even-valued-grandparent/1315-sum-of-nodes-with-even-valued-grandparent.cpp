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
     int s=0;
    int sumEvenGrandparent(TreeNode* root) {
        fun(root,NULL,NULL); 
        return s;
    }
    void fun(TreeNode* root,TreeNode* parent,TreeNode* grandparent)
    {
        if(!root) return;
        if(grandparent && grandparent->val%2==0)  
            s+=root->val;
        fun(root->left,root,parent);   
        fun(root->right,root,parent);  
    }
};