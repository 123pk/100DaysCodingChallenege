```c++
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root)return 0;
        queue<TreeNode*>P;
        P.push(root);
        int c=1,ans=0;
        while(!P.empty())
        {
            for(int i=0;i<c;++i){
                TreeNode*temp=P.front();
                if(temp->left)P.push(temp->left);
                if(temp->right)P.push(temp->right);
                P.pop();
            }
            c=P.size();
            ans++;
        }
        return ans;
    }
};```
