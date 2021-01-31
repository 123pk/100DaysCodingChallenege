/*
Platform :- Leetcode
Problem :- Palindrome Partitioning IV
Contest :- Weekly Contest 226
*/


bool PK(string x)
{
    // Copy the string x to y
    string y = x;
 
    // Reverse the string y
    reverse(y.begin(), y.end());
 
    if (x == y) {
 
        // If string x equals y
        return true;
    }
 
    return false;
}
 
 
bool Palindromes(string S, int N,vector<vector<int>>& dp)
{
     
    vector<int> startPal, lastPal;
 
    string start;
 
    // Store the indices for possible
    // palindromes from left
    for (int i = 0;
         i < S.length() - 2; i++) {
 
        // Push the current character
        start.push_back(S[i]);
 
        // Check for palindrome
        if (PK(start)) {
 
            // Insert the current index
            startPal.push_back(i);
        }
    }
 
    string last;
 
    // Stores the indexes for possible
    // palindromes from right
    for (int j = S.length() - 1;
         j >= 2; j--) {
 
        // Push the current character
        last.push_back(S[j]);
 
        // Check palindromic
        if (PK(last)) {
 
            // Insert the current index
            lastPal.push_back(j);
        }
    }
 
    // Sort the indexes for palindromes
    // from right in ascending order
    reverse(lastPal.begin(),
            lastPal.end());
 
    //vector<pair<int, int> > middlePal;
    int f  = 0;
    for (int i = 0;
         i < startPal.size(); i++) {
 
        for (int j = 0;
             j < lastPal.size(); j++) {
 
            // If the value of startPal
            // < lastPal value then
            // store it in middlePal
            if (startPal[i] < lastPal[j]) {
 
                // Insert the current pair
                int z1=startPal[i];
                int z2=lastPal[j];
                if(dp[z1+1][z2-1]){
                    f=1;break;
                }
            }
        }
    }
 
     
    
    if (f  == 1) {
        return true;
    }
 
     
    else
        return false;
}


class Solution {
public:
    bool checkPartitioning(string s) {
        int n=s.size();
        if(count(s.begin(),s.end(),s[0])==n)return true;
        //dp  for fast calculation
         pair<int,int>P;
        int c=0,gap=0;
        //int n=s.size();
         vector<vector<int>>dp(n,vector<int>(n));
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
        
        return Palindromes(s, n,dp);
    }
};
