/*
Platform :- Leetcode
Problem :- Count Items Matching Rule
Contest :- 
*/

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string A, string B) {
        int temp=0;
        if(A=="type"){
            temp=0;
        }
        else if(A=="color"){
            temp=1;
        }
        else if(A=="name"){
            temp=2;
        }
        int c=0;
        for(int i=0;i<items.size();++i){
            for(int j=temp;j<=temp;++j){
                if(items[i][j]==B)c++;
            }
        }
        return c;
    }
};
