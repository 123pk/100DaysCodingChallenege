/*
Platform :- Leetcode
Problem :- Increasing Triplet Subsequence
Approach :- Take two variables c,d and store max integer value in it traverse through the array if you find anyvalue x such that  ( x <= c) then c= x
            i. so we got one elemnt of array in c.
            ii. next time when we find a value of x<=d then d=x;
            iii. next time if we find a value greater than c & d then we return true
            iv.  return false
*/

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
    int c1 = INT_MAX, c2 = INT_MAX;
    for (int x : nums) {
        if (x <= c1) {
            c1 = x;           
        } else if (x <= c2) { 
            c2 = x;           
        } else {              
            return true;      
        }
    }
    return false;
}
};
