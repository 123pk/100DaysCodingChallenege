/*
Platform :- Leetcode
Problem :- Longest Palindromic Substring 
*/

class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        bool dp[n][n];
        int i=0,j=0,sz=1,mz=1;
        pair<int,int>z;
         while(j<n){
            int k=j;i=0;
            while(k<n){
                if(i==k){
                    dp[i][k]=1;
                }
                else{
                    if(sz==2){
                        if(s[k] == s[k-1]){
                            dp[i][k]=1;
                             z=make_pair((k+1)-sz,k);
                        }
                        else{
                            dp[i][k]=0;
                        }
                    }
                    else{
                       
                        if(s[k]==s[(k+1)-sz]){
                             
                          if((dp[i+1][k-1])){
                              dp[i][k]=1;
                              z=make_pair((k+1)-sz,k);
                          }
                          else{
                              dp[i][k]=0;
                          }
                       }
                        else{
                            dp[i][k]=0;
                        }
                        
                    }
                }
                i++;
                k++;
            }
            sz++;
            j++;
        }
        string temp;
        for(int i=z.first;i<=z.second;++i){
            temp+=s[i];
        }
        return temp;
    }
};
