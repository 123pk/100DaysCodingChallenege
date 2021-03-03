/*
Platform :- Codechef
Problem :- COUPON2
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
      int t;
      cin>>t;
      while(t--){
          long long DL,CP;
          cin>>DL>>CP;
          
          long long a,b,c;
          cin>>a>>b>>c;
          
          long long d,e,f;
          cin>>d>>e>>f;
          
          long long temp1=a+b+c;
          temp1+=d+e+f;
          
          long long temp2=temp1;
          temp2+=CP;
          
          long long z1=a+b+c;
          if(z1<150){
              temp2+=DL;
          }
          
          long long z2=d+e+f;
          if(z2<150){
              temp2+=DL;
          }
          temp1+=2*DL;
          
          if(temp1<=temp2){
              cout<<"NO"<<endl;
          }
          else cout<<"YES"<<endl;
          
      }
}
