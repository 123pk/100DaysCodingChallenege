class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head)return NULL;
        if(!head->next)return head;
        ListNode*temp=head;
        head=temp->next;
        ListNode*end=NULL;
        while(temp){
            if(temp->next){
                ListNode*z=temp;
                ListNode* z2=temp->next;
                temp->next=z2->next;
                z2->next=z;
                if(z->next){
                    end=z->next;
                
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
