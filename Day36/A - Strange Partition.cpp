/*
Platform :- Codeforces
Problem :- A - Strange Partition
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        
        long int A[n];
        long int tot=0;
        long long sum=0;
        for(int i=0;i<n;++i){
            cin>>A[i];
            tot+=A[i]/x;
            if(A[i]%x)tot++;
            sum+=A[i];
        }
        
        long int z=sum/x;
        if(sum%x)z++;
        cout<<min(tot,z)<<" "<<max(tot,z)<<endl;
    }
}
