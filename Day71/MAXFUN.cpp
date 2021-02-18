/*
Platform :- Codechef
Event :- February long 2021
Problem :- Maximise Sum ( MAXSUM)


SOLUTION WILL BE ADDED ONCE CONTEST IS OVER
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
        
        long long temp1=(A[1]-A[0]) + (A[n-1]-A[0]) + (A[n-1]-A[1]);
        long long temp2=(A[n-1]-A[n-2]) + (A[n-1]-A[0]) + (A[n-2]-A[0]);
        
        long long ans=max(temp1,temp2);
        cout<<ans<<endl;
    }
}
