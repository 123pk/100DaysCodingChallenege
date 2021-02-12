/*
Platform :- Leetcode
Problem :- Number of steps to reduce a number to zero
*/

class Solution {
public:
    int numberOfSteps (int num) {
        int tot=0;
        while(num){
            if(num%2){
                num--;
            }
            else{
                num/=2;
            }
            tot++;
        }
        return tot;
    }
};
