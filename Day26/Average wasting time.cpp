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
