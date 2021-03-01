/*
Platform :- Leetcode
Problem :- Distribute Candies
Event :- March Challenge Day1 
*/

class Solution {
public:
    int distributeCandies(vector<int>& A) {
        set<int>P;
        for(int i=0;i<A.size();++i){
            P.insert(A[i]);
        }
        
        int k=P.size();
        int n=A.size();
        n/=2;
        return min(k,n);
    }
};
