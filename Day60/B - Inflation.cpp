/*
Platform :- Codeforces
Contest :- Educational round 103
Problem :- B
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
         int  n,k;
         cin>>n>>k;
         
         long long A[n];
         map<long int ,int>P;
         long int mx=-1;
         long long tot=0;
         for(int i=0;i<n;++i){
             cin>>A[i];
             tot+=A[i];
         }
         long long rem=0,ans=0,xx=0,zz=0;
         for(int i=n-1;i>0;--i){
             tot-=A[i];
             long long temp=A[i]*100;
             long long temp2=tot*k;
             if(temp<=temp2){
                 continue;
             }
             else{
                 // cout<<temp<<" "<<temp2<<" "<<tot<<" "<<k<<endl;
                 xx =  (temp-temp2)/k;
                // cout<<xx<<" "<<endl;
                 if((temp-temp2)%k)xx++;
                 ans=max(ans,xx);
             }
         }
         cout<<ans<<endl;
         
    }
}
