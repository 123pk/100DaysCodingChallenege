/*
Platform :- Leetcode
Problem :- Arithmetic slices
*/

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        int  n=A.size();
        if(n<3)return 0;
        int c=0;int ans=0;
        for(int i=2;i<n;++i){
            if((A[i]-A[i-1]) == (A[i-1]-A[i-2])){
                c++;
                if(i==n-1){
                    ans+=(c*(c+1))/2;
                }
            }
            else{
                ans+=(c*(c+1))/2;
                c=0;
            }
            
        }
        //cout<<c<<" ";
        return ans;
    }
};
