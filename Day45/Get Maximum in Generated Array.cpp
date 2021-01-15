/*
Platform :- Leetcode
Problem :- Get Maximum in Generated Array
*/

class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0||n==1)return n;
        vector<int>P(n+1);
        int mx=-1;
        P[0]=0;
        P[1]=1;
        
        for(int i=2;i<=n;++i){
            int temp=i/2;
            if(i%2){
                P[i]=P[temp]+P[temp+1];
                mx=max(mx,P[i]);
            }
            else{
                P[i]=P[temp];
                mx=max(mx,P[i]);
            }
        }
        return mx;
    }
};
