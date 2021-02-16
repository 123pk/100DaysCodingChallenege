/*
Platform :- Codeforces
Contest :- Educational round 104
Problem :- A - Arena
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        int c=0;
        long int A[n];
        for(int i=0;i<n;++i){
            cin>>A[i];
        }
        
        sort(A,A+n);
        for(int i=0;i<n;++i){
            for(int j=0;j<i;++j){
                if(A[i]>A[j]){
                    c++;
                    break;
                }
            }
        }
        cout<<c<<endl;
    }
}
