/*
Platform :- Leetcode
Problem :- Average Wasting time
Approach :- we can clearly see that atleast all of them need to wait until their dish is cooked so min ( tot = (sum of all time for coocking their dishes))
            we will take an temperory variable and it will tell us that if cook is free at time of order or not . if not we will add the waiting time to total 
            value which is ( order completing time - order time )
*/

class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& c) {
        double tot=0;
        for(auto x:c){
            tot+=x[1];
        }
        double temp=0;
        for(int i=0;i<c.size();++i){
           if(i==0){
               temp+=c[i][0]+c[i][1];
           } 
            else{
                if(temp<=c[i][0]){
                    temp=c[i][0]+c[i][1];
                }
                else{
                    tot+=temp-c[i][0];
                    temp+=c[i][1];
                }
            }
        }
        return tot/c.size();
    }
};
