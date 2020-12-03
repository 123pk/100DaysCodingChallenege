/*
Platform:- Leetcode
Question name:- Swap Nodes in Piars
Given a linked list, swap every two adjacent nodes and return its head.
You may not modify the values in the list's nodes. Only nodes itself may be changed.
*/


class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head) return NULL;
        ListNode tmp(0);
        tmp.next = head;
        ListNode *temp = &tmp, *end = head;
        while(end && end->next){
            temp->next = end->next;
            temp = temp->next;
            end->next = temp->next;
            temp->next = end;
            temp = end;
            end = end->next;
        }
        return tmp.next;
    }
};
