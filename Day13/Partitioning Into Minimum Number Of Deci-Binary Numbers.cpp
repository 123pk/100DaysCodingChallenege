/*
Platform :- Leetcode
Problem :- Partitioning Into Minimum Number Of Deci-Binary Numbers
Approach :- if you analyse carefully the maximum number of operations you need to perform is simply the largest number in given string
*/

class Solution {
public:
    int minPartitions(string n) {
        int mx=0;
        for(auto x:n)mx=max(mx,x-'0');
        return mx;
    }
};
