/*
Platform :- Leetcode
Contest :- Wekely contest 228
Problem :- Count number of homogeneous substring
*/

int pk(int a, int b,int mod) 
{ 
    int res = 0;   
  
     
    a %= mod; 
  
    while (b) 
    { 
         
        if (b & 1) 
            res = (res + a) % mod; 
  
          
        a = (2 * a) % mod; 
  
        b >>= 1; // b = b / 2 
    } 
  
    return res; 
} 

class Solution {
public:
    int countHomogenous(string s) {
        long long tot=0;
        int c=1;
        int mod=1e9+7;
        int n=s.size();
        if(n==1)return 1;
        for(int i=1;i<s.size();++i){
            if(s[i]==s[i-1]){
                c++;
                if(i==n-1){
                    tot+=pk(c,c+1,mod)/2;
                }
            }
            else{
                 tot+=pk(c,c+1,mod)/2;
                c=1;
                if(i==n-1){
                     tot+=pk(c,c+1,mod)/2;
                }
            }
        }
        int ans=tot%mod;
        return ans;
    }
};
