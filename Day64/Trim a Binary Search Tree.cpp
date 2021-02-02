/*
Platform:- Leetcode
Problem :- Trim a Binary Search Tree
Event :- February Daily challenge
*/

class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        while(root != NULL && (root->val < low || root->val > high)){
            if(root->val < low)root = root->right;
            else root = root->left;
        }
        if(root == NULL)return NULL;
        TreeNode* left = trimBST(root->left, low, high);
        TreeNode* right = trimBST(root->right, low, high);
        root->left = left;
        root->right = right;
        return root;
    }
};
