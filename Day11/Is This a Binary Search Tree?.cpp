/*
Platform :- Hackerrank
Problem :- Is This a Binary Search Tree?
Approach :- There are many approaches for this but one approach that I find easy is finding 'INORDER' traversal of tree
            and if it is in increasing order then our tree is BST else not

*/

void inorder(Node* node,vector<int>& P){
        if(!node)return;
        inorder(node->left,P);
        P.push_back(node->data);
        inorder(node->right,P);
    }
	bool checkBST(Node* root) {
        if(!root)return true;
		vector<int>P;
        inorder(root,P);
        int f=0;
        for(int i=1;i<P.size();++i){
            if(P[i]<=P[i-1]){
                f=1;
                break;
            }
        }
        if(f)return false;
        return true;
	}
