/*
Platform :- Google Kickstart Round A 2019
Problem :- Training
Approach :- we need to find minimum cost of training student such that m out of n strudent have their skills equal and cost is minimised.
           i. sort array
           ii. make prefix sum array to find sum of m elements in array in O(1) time
           iii. traverse from m-1 to n-1 ( 0 based indexing ) find the minimum value of ( A[i]*m - (pref[i]-pref[i-1])) becuase this amount will be required to make skills of those
                m students equal .
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    for(int z=1;z<=t;++z){
        int n,m;
        cin>>n>>m;
        
        long int A[n];
        long int pref[n];
        for(int i=0;i<n;++i){
            cin>>A[i];
            
        }
        sort(A,A+n);
        for(int i=0;i<n;++i){
            if(i){
                pref[i]=pref[i-1]+A[i];
            }
            else pref[i]=A[i];
        }
        long int ans=0;
        long int tot=0;
        for(int i=m-1;i<n;++i){
            if(i==m-1){
                tot=pref[i];
                long int temp=A[i]*m;
                ans=abs(temp-tot);
            }
            else{
                tot=pref[i]-pref[i-m];
                long int temp=A[i]*m;
                ans=min(ans,abs(temp-tot));
            }
        }
        cout<<"Case #"<<z<<": "<<ans<<endl;
    }
}
