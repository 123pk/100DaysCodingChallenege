/*
Platform :- Atcoder
Problem :- C - Squared Error
Contest :- Atcoder Beginner Contest 194
*/

#include<bits/stdc++.h>
using  namespace std;

int main(){
    int n;
    cin>>n;
    
    long long A[n];
    long long ans=0;
    long long pref[n];
    long long pref_sqr[n];
    for(int i=0;i<n;++i){
        cin>>A[i];
        if(i==0){
            pref[i]=A[i];
            pref_sqr[i]=A[i]*A[i];
        }
        else{
            pref[i]=pref[i-1]+A[i];
            pref_sqr[i]=pref_sqr[i-1]+(A[i]*A[i]);
        }
    }
    
    for(int i=1;i<n;++i){
        long long temp=(A[i]*A[i]*i);
        temp+=pref_sqr[i-1];
        
        long long temp2=2*pref[i-1]*A[i];
        temp-=temp2;
        ans+=temp;
    }
    cout<<ans<<endl;
}
