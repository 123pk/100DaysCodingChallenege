/*
Platform :- Leetcode
Contest :- Weekly Contest 227
Problem :- Maximum Score from Removing Stones
*/

class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int>P;
        P.push(a);
        P.push(b);
        P.push(c);
        int tot=0;
        while(1){
            if(P.empty())break;
            int temp1=P.top();
            P.pop();
            if(P.empty())break;
            int temp2=P.top();
            P.pop();
            
            if((temp1&&temp2))tot++;
            temp1--;
            if(temp1)P.push(temp1);
            temp2--;
            if(temp2)P.push(temp2);
        }
        return tot;
    }
};
