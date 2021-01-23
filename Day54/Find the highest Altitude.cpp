/*
Platform :- Leetcode
Problem :- Find the highest Altitude
Approach :- find sum and return the maximum value that sum acheived between 1st to last element 
*/

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int mx=0;int tot=0;
        for(auto x:gain){
            tot+=x;
            mx=max(mx,tot);
        }
        return mx;
    }
};
