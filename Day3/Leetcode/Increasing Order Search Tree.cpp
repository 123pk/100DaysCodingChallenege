/* 
Platform :- Leetcode
Problem :- Increasing Order Search Tree
Problem statement :- Given the root of a binary search tree, rearrange the tree in in-order so that the leftmost node in the tree is now the root of the tree,
                     and every node has no left child and only one right child.
Approach :- i.We know that inorder traversal gives us all the element of BST in sorted order that is what we required.
           ii. Once we got the elements in sorted order we create tree of it having only right child
*/

class Solution {
public:
    
    void  inorder(TreeNode*node,vector<int>&P){
        if( !node )return ;
        inorder( node->left ,P) ;
        P.push_back( node->val) ;
        inorder(node->right,P);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        
        //if there are no element in BST
        if(!root)return root;
        // if there is only one element in BST
        if((!root->left)&&(!root->right)){
            return root;
        }
        
        vector<int>P; 
        inorder(root,P); //traversing BST in inorder and storing it in a vector
        
        //creating increasingBST of the elements in vector 
        TreeNode*temp=NULL;
        for(int i=0;i<P.size();++i)
        { 
            if(i==0){
                TreeNode*z=new TreeNode(P[i]);
                temp=z;
                root=z;
            }
            else{
                TreeNode*z=new TreeNode(P[i]);
                temp->right=z;
                temp=z;
            }
        }
        return root;
    }
};
