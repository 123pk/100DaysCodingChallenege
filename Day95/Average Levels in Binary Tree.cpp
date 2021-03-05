/*
Platform :- Leetcode
Problem :- Average Levels in Binary Tree
Hint:- BFS and find sum on each level divide by total no of nodes
*/

class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>ans;
        queue<TreeNode*>P;
        P.push(root);
         
        while(!P.empty()){
            int c=P.size();
            double tot=0;
            for(int i=1;i<=c;++i){
                TreeNode*temp=P.front();
                if(temp->left){
                    P.push(temp->left);
                }
                
                if(temp->right){
                    P.push(temp->right);
                }
                tot+=(temp->val);
                P.pop();
            }
            ans.push_back(tot/c);
        }
        
        return ans;
    }
};
