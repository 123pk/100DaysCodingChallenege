/*
Platform :- Atcoder
Problem :- B - Alcoholic
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   long long y;
   cin>>n>>y;
   y*=100;
   long long tot=0;
   int c=0;
   int ans=0,f=0;
   for(int i=0;i<n;++i){
       long long a,b;
       cin>>a>>b;
       tot+=(a*b);
       c++;
       if(tot>y && ans==0){
           ans=c;
           f=1;
       }
   }
   
   if(f)cout<<ans<<endl;
   else cout<<-1<<endl;
}
