/*
 Platform :- Atcoder
 Problem :- ABC Preparation
 Approach :- find the minimum of a,b,c & d
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long a,b,c,d;cin>>a>>b>>c>>d;
    
    long long ans=min(a,min(b,min(c,d)));
    cout<<ans<<endl;
}
