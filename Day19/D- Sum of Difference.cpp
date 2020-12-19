/*
Platform :- Atcoder
Problem :- D - Sum of Difference
Approach :- sort the array and find prefix sum of array . finding absolute differece and converting all elements to it is same . so we will be finding the prefix sum from i+1 to n for 
            0<= i < n and another temp value that is ,( temp= A[i] * (n-(i+1))) and find absolute difference between absolute value and temp
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    
    long int A[n];
    long long tot=0;
    for(int i=0;i<n;++i){
        cin>>A[i];
        
    }
    sort(A,A+n);
    for(int i=0;i<n;++i)tot+=A[i];
    long long ans=0;
    for(int i=0;i<n;++i){
        tot-=A[i];
        long long temp=A[i]*(n-(i+1));
        ans+=abs(temp-tot);
        
    }
    
    cout<<ans<<endl;
}
