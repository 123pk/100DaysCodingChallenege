/*
Platform :- Codeforces
Problem :- Four Segments
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long A[4];
        for(int i=0;i<4;++i){
            cin>>A[i];
        }
        sort(A,A+4);
        long long ans=A[0]*A[2];
        cout<<ans<<endl;
    }
}
