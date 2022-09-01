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
   bool same(TreeNode* root, TreeNode* subRoot) {
         if(!root or !subRoot)
             return root==subRoot;
         if(root->val!=subRoot->val)
             return false;
         return same(root->left,subRoot->left) and same(root->right,subRoot->right);
     }
     bool trav(TreeNode* root, TreeNode* subRoot) {
         if(root==NULL)
             return false;
         if(same(root,subRoot)) 
             return true;
         return trav(root->left,subRoot) or trav(root->right,subRoot);

     }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        return trav(root,subRoot);
    }
};