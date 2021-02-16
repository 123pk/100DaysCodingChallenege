/*
Platform :- Leetcode
Problem :- The K weakest Rows in matrix 
*/

bool comp(pair<int,int>P,pair<int,int>Q){
    if(P.second==Q.second){
        return P.first<Q.first;
    }
    return P.second<Q.second;
}

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int>ans;
        vector<pair<int,int>>P;
        for(int i=0;i<mat.size();++i){
            int c=0;
            for(int j=0;j<mat[i].size();++j){
                if(mat[i][j]){
                    c++;
                }
            }
            P.push_back({i,c});
        }
        sort(P.begin(),P.end(),comp);
        
        for(int i=0;i<k;++i){
            ans.push_back(P[i].first);
        }
        return ans;
    }
};
