/*
Platform :- Codeforces
Contest :- Codeforces Round 703 Div 2
Problem :- B - Eastern Exhibition
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        long int A[n],B[n];
        for(int i=0;i<n;++i){
            cin>>A[i]>>B[i];
        }
        sort(A,A+n);
        sort(B,B+n);
        
        if(n%2){
            cout<<1<<endl;
            continue;
        }
        long long temp1=A[n/2]-A[n/2-1]+1;
        long long temp2=B[n/2]-B[n/2-1]+1;
        long long ans=temp1*temp2;
        cout<<ans<<endl;
    }
}
