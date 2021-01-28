/*
Platform :- Codeforces
Contest :- Codeforces Round #698 Div 2
Problem :- B
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
         int q,d;
         cin>>q>>d;
         
         for(int i=0;i<q;++i){
             long int x;
             cin>>x;
             
             if((x>=(d*10))){
                 cout<<"YES"<<endl;
             }
             else{
                 int f=0;
                 while(x>0){
                     x-=d;
                     if(x%10==0){
                         f=1;break;
                     }
                 }
                 if(f)cout<<"YES"<<endl;
                 else cout<<"NO"<<endl;
             }
         }
         
    }
}
