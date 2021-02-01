/*
Platform :- Leetcode
Event :- February Daily challenge
Problem :- Number of 1 Bit's
*/

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int c=0;
        while(n){
            if(n%2)c++;
            n/=2;
        }
        return c;
    }
};
