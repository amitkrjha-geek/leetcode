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
   
  bool isSorted(vector<int> &ans){
    int n = ans.size();
    for(int i = 1;i<n;i++){
        if(ans[i]<=ans[i-1]) return false;
    }
    return true;
}

	// standard inorder traversal
   void inorder(vector<int> &ans,TreeNode* root){
    if(!root) return;
    
    inorder(ans,root->left);
	
    ans.push_back(root->val); // pushing elements according to the ans vector ( left root right) 

    inorder(ans,root->right);
    return;
}

// main function 
bool isValidBST(TreeNode* root) {
    vector<int> ans;
    inorder(ans,root);
    
    if(isSorted(ans)) return true;
    return false;
}
};