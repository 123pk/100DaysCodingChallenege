/*
Platform :- Codeforces
Problem :- Petya and staircases
Approach :- we need  to check for two cases 
           i. Case I either  1 or N is dirty
           ii. There are consecutive more than two staircases that are dirty
           iii. If none of the above two case satisfy print "YES" else print "NO"

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    
    long int A[m];
    int f=0;
    for(int i=0;i<m;++i){
        cin>>A[i];
        if(A[i]==1 || A[i]==n)f=1;
    }
    if(f){cout<<"NO"<<endl;exit(0);}
    
    sort(A,A+m);
    long int c=0,z=0, d=1;
    for(int i=1;i<m;++i){
        z=A[i]-A[i-1];
        
        if(z==1){
            d++;
            c=max(d,c);
        }
        else{
            c=max(d,c);
            d=1;
        }
    }
   // cout<<c<<" $ ";
    if(c>2)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
