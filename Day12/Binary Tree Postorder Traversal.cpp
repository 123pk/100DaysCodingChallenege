/*
Platform :- Leetcode
Problem :- Binary Tree Postorder Traversal
Approach :- postorder traversal using recursion

*/
class Solution {
public:
    void postorder(TreeNode*root,vector<int>& P){
        if(!root)return;
        postorder(root->left,P);
        postorder(root->right,P);
        P.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>P;
        postorder(root,P);
        return P;
    }
};
