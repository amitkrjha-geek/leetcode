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
    vector<int>v;
    void inorder(TreeNode *root)
    {
        if(!root)return;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
        
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        inorder(root);
        int sum=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]>=low&&v[i]<=high)sum+=v[i];
            if(v[i]>high)break;
        }
        return sum;
    }
};