/*
Platform :- Leetcode
Problem :- Maximum Depth of Binary Tree
Problem statement:- 
Given the root of a binary tree, return its maximum depth.
A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
Example 1:
Input: root = [3,9,20,null,null,15,7]
Output: 3
 
Example 2:
Input: root = []
Output: 0
 
Approach :- idea is to do level order traversal and max levl is height of tree
*/

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if( !root ) return 0;
        queue < TreeNode* > P;
        P.push( root );                    //idea is to do level order traversal and max levl is height of tree
        int c = 1 , ans = 0;
        while( !P.empty() )
        {
            for(int i = 0 ; i < c ; ++i){
                TreeNode* temp = P.front() ;
                if(temp->left)P.push( temp->left ) ;
                if(temp->right)P.push( temp->right ) ;
                P.pop();
            }
            c=P.size();
            ans++;
        }
        return ans;
    }
};


