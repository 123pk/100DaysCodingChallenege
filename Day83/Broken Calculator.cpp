/*
Platform :- Leetcode
Event:- February Daily Challenge
Problem :- Broken Calculator
*/

class Solution {
public:
    int brokenCalc(int X, int Y) {
        int c=0;
        
        while(Y>X){
            if(Y%2)Y++;
            else Y/=2;
            c++;
        }
        c+=X-Y;
        return c;
    }
};
