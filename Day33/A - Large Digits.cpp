/*
Platform :- Atcoder
Problem  :- A- Large Digits
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    cin>>s>>t;
    
    int tot1=0,tot2=0;
    for(auto x:s)tot1+=(x-'0');
    for(auto x:t)tot2+=(x-'0');
    cout<<max(tot1,tot2)<<endl;
    
}
