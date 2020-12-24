/*
Platform :- Leecode
Problem :- Swapping Nodes in Pairs
*/


class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head)return NULL;
        if(!head->next)return head;
        ListNode*temp=head;
        ListNode*end=NULL;
        while(temp){
            if(temp->next){
                swap(temp->val,temp->next->val);
                if(temp->next->next){
                    end=temp->next->next;
                
                }else{
                    break;
                }
                temp=end;
            }
            else{
                break;
            }
        }
        
        return head;
    }
};
