/*
Platform :- Leetcode
Problem:- Balaced Binary Tree
Approach :- check if left subtree is height & right subtree is height balaned recursively
*/

class Solution {
public:
    int height(TreeNode* node) { 
    
    if (node == NULL) 
        return 0; 
  
    return 1 + max(height(node->left), 
                   height(node->right)); 
   } 
    
    bool isBalanced(TreeNode* root) {
    int lh; 
    int rh; 
  
    
    if (root == NULL) 
        return 1; 
  
    
    lh = height(root->left); 
    rh = height(root->right); 
  
    if (abs(lh - rh) <= 1 && isBalanced(root->left) && isBalanced(root->right)) 
        return 1; 
  
    
    return 0; 
    }
};
