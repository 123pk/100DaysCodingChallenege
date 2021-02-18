/*
Platform :- Codeforces
Contest :- Codeforces Round 702 Div 3
Problem :- E - Accidental Victory 
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
        vector<long int>B;
        for(int i=0;i<n;++i){
            cin>>A[i];
            B.push_back(A[i]);
        }
        
        sort(B.begin(),B.end());
        
        vector<long long>pref(n);
        pref[0]=B[0];
        long int mx=-1;
        for(int i=1;i<n;++i){
            if(B[i]>pref[i-1]){
                mx=B[i-1];
            }
            pref[i]=pref[i-1]+B[i];
        }
        int c=0;
        for(int i=0;i<n;++i){
            if(mx<A[i]){
                c++;
            }
        }
        
        cout<<c<<endl;
        for(int i=0;i<n;++i){
            if(mx<A[i]){
                cout<<(i+1)<<" ";
            }
        }
        cout<<endl;
        
    }
}
