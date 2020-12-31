/*
Platform :- Leetcode
Problem  :- Pseudo-Palindromic Paths in a Binary Tree
Approach :- Find all path check if the path contains odd occurence <=1 then we can form palindrome out of it else not 
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
    bool ispal(string s){
        map<char,int>P;
        for(int i=0;i<s.size();++i){
            P[s[i]]++;
        }
        int c=0;
        for(auto x:P){
            if(x.second%2)c++;
        }
        if(c<=1)return true;
        return false;
    }
    
    void allpath(TreeNode*node,string s,vector<string>&P){
        if(!node)return;
        if((node->left==NULL) && (node->right==NULL)){
            s+=to_string(node->val);
            //cout<<s<<" $ ";
            P.push_back(s);
        }
        else s+=to_string(node->val);
        allpath(node->left,s,P);
        allpath(node->right,s,P);
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<string>P;
        if(!root)return 0;
        allpath(root,"",P);
        int c=0;
        for(auto x:P){
            if(ispal(x))c++;
        }
        return c;
    }
};
