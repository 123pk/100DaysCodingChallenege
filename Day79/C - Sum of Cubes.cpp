/*
Platform :- Codeforces
Contest :- Codeforces Round 703 Div 3 
Problem :- C - Sum of Cubes 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
     
    while(t--){
        long long x;
        cin>>x;
        
        if(x==1){
            cout<<"NO"<<endl;
            continue;
        }
        int f=0;
        int temp=cbrt(x);
        for(int i=1;i<=(10000);++i){
            long long temp=i;
            temp*=i;
            temp*=i;
            if(x<temp)break;
            long long z=cbrt(x-temp);
            if(z==0)break;
            long long xx=x-temp;
            long long z3=z*z*z;
            if(z3==xx){
                //cout<<z<<" "<<temp<<endl;
                f=1;break;
            }
             
        }
        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
