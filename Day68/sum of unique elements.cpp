/*
Platform :- Leetcode
Contest :- Biweekly Contest 45
Problem :- Sum of unique elements 
*/

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int>P;
        for(auto x:nums){
            P[x]++;
        }
        
        int tot=0;
        for(auto x:P){
            if(x.second==1){
                tot+=x.first;
            }
        }
        return tot;
    }
};
