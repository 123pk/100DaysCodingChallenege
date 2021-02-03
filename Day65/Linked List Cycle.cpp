/*
Platform :- Leetcode
Problem :- Linked List Cycle
Approach :- insert address of each node in set if an adress is already present in set then we have a cycle else not
*/
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head)return false;
        ListNode* temp=head;
        set<ListNode*>P;
        P.insert(temp);
        temp=temp->next;
        while(temp){
            
            if(P.find(temp)!=P.end()){
                return true;
            }
            P.insert(temp);
            temp=temp->next;
        }
        return false;
    }
};
