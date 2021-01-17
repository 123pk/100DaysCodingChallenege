/*
Platform :- Leetcode
Problem :- Number of rectangles that form the largest square
*/

class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& A) {
        int mx=-1;
        vector<int>P;
        for(auto x:A){
            int z=min(x[0],x[1]);
            P.push_back(z);
            mx=max(mx,z);
        }
        int ans=count(P.begin(),P.end(),mx);
        
        return ans;
    }
};
