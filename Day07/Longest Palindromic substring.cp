/*
Platform :- Leetcode
Problem :- Longest Palindromic substring
Approach :- It is similar to finding total number of palindromic substring one change that I have did in the program is instead of counting , I am
            storing the starting and ending index of palindromic substring and after end of iteration return string of that range

*/
class Solution {
public:
    string longestPalindrome(string s) {
        int f=0;
        string ans="";
        pair<int,int>P;
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
                P=make_pair(i,j);
               
            }
            else{
                if(gap==1){
                    if(s[i]==s[j]){
                        dp[i][j]=1;
                        P=make_pair(i,j);
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
                               P=make_pair(i,j);
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
        for(int i=P.first;i<=P.second;++i){
            ans+=s[i];
        }
        return ans;
    }
};
