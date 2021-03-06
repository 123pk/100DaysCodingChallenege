/*
Platform :- Leetcode
Problem :- Check if given number is sum or power of 3
Contest :- Bi weekly contest 47
*/

class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(n){
            if(n%3){
                if(n%3==1){
                    n--;
                }
                else return false;
            }
            else n/=3;
        }
        return true;
    }
};
