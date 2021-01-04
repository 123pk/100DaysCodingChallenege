/*
Platform :- Codeforces
Problem :- A- Cards for friends
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,m,k;
        cin>>n>>m>>k;
        
        long int c=1;
        while(1){
            if(m%2){
                break;
            }
            m/=2;
            c*=2;
        }
        
        long int d=1;
        while(1){
            if(n%2){
                
                break;
            }
            n/=2;
            d*=2;
        }//cout<<d<<" "<<c<<endl;
        d*=c;
        
        if(d>=k)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
