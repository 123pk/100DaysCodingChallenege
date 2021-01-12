/*
Platform :- Leetcode
Problem :- Add two numbers
Approach :- traverse through the linked lists given and maintain a variable remainder which will be added to the numbers accordingly 
*/

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*temp=l1,*temp2=l2,*head=NULL,*temp3=NULL;
        int rem=0;
        while(temp && temp2){
            int z=temp->val+temp2->val+rem;
            rem=z/10;
            ListNode*xx=new ListNode;
            xx->val=z%10;
            if(head==NULL){
                head=xx;
                temp3=xx;
                xx->next=NULL;
            }
            else{
                temp3->next=xx;
                temp3=xx;
                xx->next=NULL;
            }
            temp=temp->next;
            temp2=temp2->next;
        }
        
        if((!temp && !temp2)){
            if(rem){
                ListNode*xx=new ListNode;
                        xx->val=rem;
                        temp3->next=xx;
                        xx->next=NULL;
            }
            return head;
        }
        
        if((temp)){
            while(temp){
                int z=temp->val+rem;
                rem=z/10;
                ListNode*xx=new ListNode;
            xx->val=z%10;
            if(head==NULL){
                head=xx;
                temp3=xx;
                xx->next=NULL;
            }
            else{
                temp3->next=xx;
                temp3=xx;
                xx->next=NULL;
            }
                if((!temp->next)){
                    if(rem){
                        ListNode*xx=new ListNode;
                        xx->val=rem;
                        temp3->next=xx;
                        xx->next=NULL;
                    }
                }
                temp=temp->next;
            }
        }
        else{
            while(temp2){
                int z=temp2->val+rem;
                rem=z/10;
                ListNode*xx=new ListNode;
            xx->val=z%10;
            if(head==NULL){
                head=xx;
                temp3=xx;
                xx->next=NULL;
            }
            else{
                temp3->next=xx;
                temp3=xx;
                xx->next=NULL;
            }  
                if((!temp2->next)){
                    if(rem){
                        ListNode*xx=new ListNode;
                        xx->val=rem;
                        temp3->next=xx;
                        xx->next=NULL;
                    }
                }
                temp2=temp2->next;
            }
        }
        return head;
    }
};
