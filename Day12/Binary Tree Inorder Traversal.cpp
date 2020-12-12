/*
Platform :- Leetcode
Program :- Binary Tree Inorder Traversal
Approach :- inorder traversal using recursion
*/

class Solution {
public:
    void inorder(TreeNode*root,vector<int>& P){
        if(!root)return;
        inorder(root->left,P);
        P.push_back(root->val);
        inorder(root->right,P);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>P;
        inorder(root,P);
        return P;
    }
};
