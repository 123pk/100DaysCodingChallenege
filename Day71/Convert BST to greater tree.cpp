/*
Platform :- Leetcode
Problem :- Convert BST to Greater Tree
*/

class Solution {
public:
    int solve(TreeNode* root, int r) {
        
	      if(root==NULL) return r;
	
       	root->val += solve(root->right,r);
	      return solve(root->left,root->val);
    }
    
    TreeNode* convertBST(TreeNode* root) {
	 
	      solve(root,0);
	      return root;
    }
};
