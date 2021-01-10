/*
Platform :- Leetcode
Problem :- Swapping nodes in linked list
*/

class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int>P;
        ListNode*temp=head;
        while(temp){
            P.push_back(temp->val);
            temp=temp->next;
        }
        swap(P[k-1],P[P.size()-k]);
        ListNode*z=NULL;
        temp=NULL;
        for(int i=0;i<P.size();++i){
            ListNode*zz=new ListNode;
            zz->val=P[i];
            if(i==0){
                z=zz;
                temp=zz;
                zz->next=NULL;
            }
            else{
                temp->next=zz;
                temp=zz;
                zz->next=NULL;
            }
        }
        return z;
    }
};
