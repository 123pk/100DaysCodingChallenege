/*
Platform :- Leetcode
Problem :- Intersection of Two Linked Lists
Event :- March Daily Challenege
*/

 
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode*,int>Q;
        while(headA){
            Q[headA]++;
            headA=headA->next;
        }
        
        while(headB){
            if(Q[headB])return headB;
            headB=headB->next;
        }
        return NULL;
    }
};
