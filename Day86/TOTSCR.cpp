/*
Platform :- Codechef
Problem :- TOTSCR
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
         int n,k;
         cin>>n>>k;
         
         long int A[k];
         for(int i=0;i<k;++i){
             cin>>A[i];
         }
         
         for(int i=0;i<n;++i){
         
         string s;
         cin>>s;
          long long tot=0;
         
         for(int j=0;j<s.size();++j){
             if(s[j]=='1')tot+=A[j];
         }
         
         cout<<tot<<endl;
         
         }
         
        
    }
}
