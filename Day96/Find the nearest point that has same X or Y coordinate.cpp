/*
Platform :- Leetcode
Problem :- Find the nearest point that has same X or Y coordinate
Contest :- Bi weekly event 47
*/

bool comp(pair<int,int>P,pair<int,int>Q){
if(P.second==Q.second){
    return P.first<Q.first;
}
    return P.second<Q.second;
}

class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        vector<pair<int,int>>P;
        
        for(int i=0;i<points.size();++i){
            if(points[i][0]==x || points[i][1]==y){
                if(points[i][0]==x && points[i][1]==y)return i;
                else if(points[i][0]==x){
                    int temp=abs(points[i][1]-y);
                    P.push_back({i,temp});
                }
                else{
                    int temp=abs(points[i][0]-x);
                    P.push_back({i,temp});
                }
            }
        }
        
        if(P.size()==0)return -1;
        sort(P.begin(),P.end(),comp);
        
        return P[0].first;
    }
};
