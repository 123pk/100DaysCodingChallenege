/*
Platform :- Atcoder
Contest :- Atcoder Regular Contest 112
Problem :- A - B =C
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long a,b;
        cin>>a>>b;
         
        if(a==0 && b==0){
            cout<<1<<endl;
        }
        else{
            long long z=2*a;
            if(z>b){
                cout<<0<<endl;
                continue;
            }
            long long temp=(b-a);
            temp-=(a-1);
            temp*=(temp+1);
            temp/=2;
            cout<<temp<<endl;
        }
    }
}
