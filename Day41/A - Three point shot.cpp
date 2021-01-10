/*
Platform :- Atcoder
Problem :- Three point shot
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long x,y;
    cin>>x>>y;
    
    long long z=max(x,y)-min(x,y);
    if(z<3)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
