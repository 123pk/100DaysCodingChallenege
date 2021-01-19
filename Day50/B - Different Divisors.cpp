/*
Platform :- Codeforces
Problem :- B - Different Divisors

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
       int d;
       cin>>d;
       
       long long temp=1;
       
           temp+=d;
           //temp++;
           int c=0;
           long long ans=1;
           while(c<2){
               int k=0;
               for(int i=2;i*i<=temp;++i){
                   if((temp%i)==0){
                       if((temp/i)==i){
                          k++;
                       }
                       else{
                           k+=2;
                       }
                   }
                   if(k)break;
               }
               if(k==0){
                   c++;
                   ans*=temp;
                   temp+=d;
               }
               else{
                   temp++;
               }
               
           }
           cout<<ans<<endl;
       
             
    }
}
