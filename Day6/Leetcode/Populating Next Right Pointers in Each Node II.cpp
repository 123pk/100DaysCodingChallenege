/* 
Platform :- Leetcode
Question :- Populating Next Right Pointers in Each Node II
Approach :- Do Level Order Traversal and if there is any right node of current node in 'same level' then make next of current node point to that node.
*/
class Solution {
public:
    Node* connect(Node* root) {
        if(!root)return root;
        
        queue<Node*>P;
        P.push(root);
        int c=1;
        while(!P.empty())
        {
            for(int i=1;i<=c;++i)
            {
                Node*temp=P.front();
                if(i==c)
                {
                    temp->next=NULL;       //if current node is right most node adding null to it
                     
                    if(temp->left)P.push(temp->left);
                    
                    if(temp->right)P.push(temp->right);
                    
                    P.pop();
                }
                else
                {
                    if(temp->left) P.push(temp->left);              
                    
                    if(temp->right) P.push(temp->right);
                    
                    P.pop();
                    
                    Node*z=P.front();         //getting the right element of current node
                    temp->next=z;             //making next of current element point to its right node
                }
            }
            c=P.size();
        }
        return root;
    }
};
