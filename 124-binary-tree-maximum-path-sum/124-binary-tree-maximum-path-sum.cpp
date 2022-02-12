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

   int sum =INT_MIN;
    int maxPathSum(TreeNode* root) {
     
        pathSum(root);
        return sum;
    }
    
    int pathSum(TreeNode * root)
        {

            if(!root)
                return 0;

            int left = max(0,pathSum(root->left));
            int right = max(0,pathSum(root->right));

            sum = max(sum,left+right+root->val);
        
            return max(left,right) + root->val;
        }
};