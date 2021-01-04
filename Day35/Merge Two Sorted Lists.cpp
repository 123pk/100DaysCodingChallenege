/*
Platform :- Leetcode
Problem :- Merge two sorted list 
Approach :- create a new pointer and new list for storing the sorted array after merging both list and will compare the elements and corrrespndingly add it to our list
*/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode*temp=NULL,*head=NULL;
        while(l1&&l2){
            if(!l1 || !l2)break;
            if(l1->val<=l2->val){
                if(temp==NULL){
                    ListNode*x=new ListNode;
                    x->val=l1->val;
                    x->next=NULL;
                    head=x;
                    temp=x;
                    l1=l1->next;
                }
                else{
                     ListNode*x=new ListNode;
                    x->val=l1->val;
                    x->next=NULL;
                    temp->next=x;
                    temp=x;
                    l1=l1->next;
                }
            }
            else{
                if(temp==NULL){
                    ListNode*x=new ListNode;
                    x->val=l2->val;
                    x->next=NULL;
                    head=x;
                    temp=x;
                    l2=l2->next;
                }
                else{
                     ListNode*x=new ListNode;
                    x->val=l2->val;
                    x->next=NULL;
                    temp->next=x;
                    temp=x;
                    l2=l2->next;
                }
            }
        }
        
        if(l1||l2){
            if(l1){
                while(l1){
                    ListNode*x=new ListNode;
                    x->val=l1->val;
                    l1=l1->next;
                    if(temp){
                        temp->next=x;
                        temp=x;
                    }
                    else {
                        head=x;
                        temp=x;
                    }
                    x->next=NULL;
                }
            }
            else{
                while(l2){
                    ListNode*x=new ListNode;
                    x->val=l2->val;
                    l2=l2->next;
                    if(temp){
                        temp->next=x;
                        temp=x;
                    }
                    else{
                        head=x;
                        temp=x;
                    } 
                    x->next=NULL;
                }
            }
        }
        return head;
    }
};
