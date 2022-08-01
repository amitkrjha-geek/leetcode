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
    vector<int> v;
    int kthSmallest(TreeNode* root, int k) {
        dfs(root);
        sort(v.begin(), v.end());
        return v[k - 1];
    }
    
    void dfs(TreeNode* root){
        v.push_back(root->val);
        if(root->left) dfs(root->left);
        if(root->right) dfs(root->right);
    }

};