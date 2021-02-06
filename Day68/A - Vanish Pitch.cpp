/*
Platform :- Atcoder
Contest :- Atcoder Beginner Contest 191
Problem :- A - Vanish Pitch
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    
    long long temp1=a*b;
    long long temp2=a*c;
    
    if((d>=temp1) && (d<=temp2)){
        cout<<"No"<<endl;
    } 
    else cout<<"Yes"<<endl;
}
