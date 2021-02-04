/*
Platform:- Leetcode
Problem :- Longest Harmonic Subsequence
Event :- February Daily challenge
*/

class Solution {
public:
    int findLHS(vector<int>& nums) {
        vector<int>P;
        int tot=0;
        map<int,int>Q;
        for(auto x:nums){
            Q[x]++;
            if(Q[x]==1){
                P.push_back(x);
          }
        }
 
        sort(P.begin(),P.end());
        for(int i=1;i<P.size();++i){
            int temp=0;
            if(P[i]-P[i-1] == 1){
                temp+=Q[P[i]]+Q[P[i-1]];
            }
            tot=max(tot,temp);
        }
     return tot;    
    }
};
