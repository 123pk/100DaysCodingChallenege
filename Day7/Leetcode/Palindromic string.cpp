/*
Platform :- Leetcode
Problem :- Palindromic string
Approach :- standard DP problem can be solved easily using memozation
*/
class Solution {
public:
    int countSubstrings(string s) {
        int c=0,gap=0;
        int n=s.size();
        int dp[n][n];
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                dp[i][j]=0;
            }
        }
        
      while(gap<s.size()){
        
          int i=0,j=i+gap;
        while(j<s.size()){
            if(gap==0){
                dp[i][j]=1;
                c++;
            }
            else{
                if(gap==1){
                    if(s[i]==s[j]){
                        dp[i][j]=1;
                        c++;
                    }
                    else{
                        dp[i][j]=0;
                    }
                }
                else{
                    if(s[i]==s[j]){
                        if((i+1)<s.size()){
                            if(dp[i+1][j-1]){
                                dp[i][j]=1;
                                c++;
                            }
                            else{
                                dp[i][j]=0;
                            }
                        }
                        else{
                            dp[i][j]=0;
                        }
                    }
                    else{
                        dp[i][j]=0;
                    }
                }
            }
            i++;
            j++;
        }
          gap++;
          
      }
        return c;
    }
};
