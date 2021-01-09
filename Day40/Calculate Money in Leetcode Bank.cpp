/*
Platform :- Leetcode
Problem :- Calculate Money in Leetcode bank
*/

class Solution {
public:
    int totalMoney(int n) {
        vector<int>P;
        P.push_back(1);
        int tot=0,temp=0;
        for(int i=0;i<n;++i){
            if((i%7==0)){
                tot+=P[0];
                P[0]++;
                temp=P[0];
            }
            else{
                tot+=temp;
                temp++;
            }
        }
        return tot;
    }
};
