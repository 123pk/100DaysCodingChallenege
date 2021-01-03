/*
Platform :- Leetcode
Problem :- Maximum Units on a Truck
Approach :- sort the vector array based on number of units_per_box in descending order and find the sum respectively of first b boxes capacity
*/

bool comp(vector<int>P,vector<int>Q){
        return (P[1]) > (Q[1]);
    }
class Solution {
public:
    
    int maximumUnits(vector<vector<int>>& a, int b) {
      
        sort(a.begin(),a.end(),comp);
        int tot=0;
        for(int i=0;i<a.size();++i){
            tot+=min(b,a[i][0])*a[i][1];
            b-=min(b,a[i][0]);
            if(b==0)break;
        }
        return tot;
    }
};
