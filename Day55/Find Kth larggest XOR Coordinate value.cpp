/*
Pltaform :- Leetcode
Problem :- Find Kth Largest XOR Coordinate
Hint :- DP and store each value in sorted array 
*/

class Solution {
public:
    int kthLargestValue(vector<vector<int>>&A, int k) {
        int m=A[0].size();
        int n=A.size();
        
        int dp[n][m];
        vector<int>P;
        
        for(int i=0;i<n;++i){
            
            for(int j=0;j<m;++j){
                
                 if(i==0 && j==0){
                     dp[i][j]=A[i][j];
                 }
                else if(i==0||j==0){
                    if(i==0){
                        dp[i][j]=dp[i][j-1] xor A[i][j];
                        
                    }
                    else{
                        dp[i][j]=dp[i-1][j] xor A[i][j];
                    
                    }
                }
                else{
                    dp[i][j]=dp[i-1][j-1] xor dp[i][j-1] xor dp[i-1][j] xor A[i][j];
                     
                }
                P.push_back(dp[i][j]);
            }
        }
         
        sort(P.begin(),P.end(),greater<int>());
        return P[k-1];
    }
};
