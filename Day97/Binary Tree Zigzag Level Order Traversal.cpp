/*
Platform :- Leetcode
Problem :- Binary Tree Zigzag Level Order Traversal
Hint:- BFS + alternate level reversal
*/

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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>>ans;
        if(!root)return ans;
        queue<TreeNode*>P;
        P.push(root);
        int d=0;
        while(!P.empty()){
            vector<int>z;
            int c=P.size();
            for(int i=1;i<=c;++i){
                TreeNode* temp=P.front();
                z.push_back(temp->val);
                if(temp->left){
                    P.push(temp->left);
                }
                if(temp->right){
                    P.push(temp->right);
                }
                P.pop();
            }
            if(d%2){
                reverse(z.begin(),z.end());
            }
            if(z.size())ans.push_back(z);
            d++;
        }
        return ans;
    }
};
