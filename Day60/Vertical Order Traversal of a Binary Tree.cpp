/*
Platform :- Leetcode
Problem :- Vertical Order Traversal of a Binary Tree
Category :- Hard
Approach :- first map each node with height using level order traversal , then find the array of nodes which are on same vertical line and sort them according to their height
        i. if two nodes are at same height then smaller element come first .
*/

bool comp(pair<TreeNode*,int>P,pair<TreeNode*, int>Q){
    if(P.second==Q.second){
        return P.first->val<Q.first->val;
    }
    return P.second<Q.second;
}

class Solution {
public:
    
    void preorder(TreeNode* node, map<int,vector<TreeNode*>>&P,int c){
        if(!node)return;
        P[c].push_back(node );
        
        preorder(node->left,P,c-1);
        preorder(node->right,P,c+1);
    }
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,vector<TreeNode*>>P;
        
        //find the splits(array or node) which are on same vertical line
        preorder(root,P,0);
        
        //first map each node with its height using hash map
        queue<TreeNode*>Z;
        Z.push(root);
        map<TreeNode*,int>xx;
        xx[root]=1;
        int c=2;
        while(!Z.empty()){
            int siz=Z.size();
            for(int i=1;i<=siz;++i){
                TreeNode* temp=Z.front();
                if((temp->left)){
                    Z.push(temp->left);
                }
                
                if(temp->right){
                    Z.push(temp->right);
                }
                xx[temp]=c;
                Z.pop();
            }
            c++;
        }
        
        //sort the array of nodes with their y coordinate
        vector<vector<int>>ans;
        for(auto x:P){
            vector<pair<TreeNode*,int>>Q;
            for(auto y:x.second){
                Q.push_back({y,xx[y]});
            }
            sort(Q.begin(),Q.end(),comp);
            vector<int>temp;
            for(auto x:Q){
                temp.push_back(x.first->val);
            }
            ans.push_back(temp);
        }
        
        return ans;
        
    }
};
