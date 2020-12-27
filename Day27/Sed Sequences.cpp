/*
Platform :- Codechef
Problem :- Sed Sequences
Approach :- if the sum of elements of array is divisible by 'K' then print '0' else we can always add some positive integer and make it divisible by 'K' in '1' operation
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        
        long int A[n],mx=-1;
        long long tot=0,temp=0;
        for(int i=0;i<n;++i){
            cin>>A[i];
            tot+=A[i];
            mx=max(mx,A[i]);
        }
        sort(A,A+n);
        if(tot%k==0){
            cout<<"0"<<endl;
        }
        else{
             cout<<1<<endl;
          
        }
    }
}
