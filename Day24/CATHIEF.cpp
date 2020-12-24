/*
Platform :- Codechef
Problem :- Catch the Thief
Approach :- if the distance between 'x' and 'y' is not divisible by 'k' then it is never possible to 
            else find ( abs(x-y)/k ) >= n then is always possible else not
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y,k,n;
        cin>>x>>y>>k>>n;
        k+=k;
        long long tot=abs(x-y);
        if(tot%k){
            cout<<"No"<<endl;
        }
        else{
            long long z=tot/k;
            if(z<=n)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
}
