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
 void help(TreeNode* root, string& temp, vector<string>& ans)
    {
        if(!root) return;
        string s = temp;
        s=temp+"->"+to_string(root->val);
        if(root->left==NULL && root->right==NULL) 
        {
            ans.push_back(s);
            return;
        }
        help(root->left, s, ans);
        help(root->right, s, ans);
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
         
        string temp=to_string(root->val);
        vector<string> ans;
        if(root->left==NULL&&root->right==NULL) 
        {
            ans.push_back(temp);
            return ans;
        }
        
        help(root->left, temp, ans);
        help(root->right, temp, ans);
        return ans;
    }
};