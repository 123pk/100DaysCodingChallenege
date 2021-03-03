/*
Platform :- Codechef
Problem :- MVALUE
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        long int A[n];
        for(int i=0;i<n;++i){
            cin>>A[i];
        }
        
        sort(A,A+n);
        
        long long ans=((A[n-1]-1)*(A[n-2]+1)+1);
        long long temp=((A[0]+1)*(A[1]-1)+1);
        ans=max(ans,temp);
        cout<<ans<<endl;
    }
}
