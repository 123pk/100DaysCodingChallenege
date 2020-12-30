/*
Platform :- Codeforces
Problem :- Last minute enhancements
Approach :- we can change elements of array till A[n-1]+1 we will use map to check if we need to change any number and next number space is empty then we can do so
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
         int A[n];
         map<int,int>P;
        for(int i=0;i<n;++i){
            cin>>A[i];
           
        }
        
        int temp=A[n-1],ans=0;
        for(int i=0;i<n;++i){
            if(P[A[i]]){
                if(P[A[i]+1]==0){
                    ans++;
                    P[A[i]+1]++;
                }
            }
            else{
                P[A[i]]++;
                ans++;
            }
        }
        cout<<ans<<endl;
        
       
    }
}
