/*
Platform :- Codeforces
Problem :- A - Kth Largest Value
Contest :- Codeforces Global Round 13
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
     
        int n,q;
        cin>>n>>q;
        
        int c=0;
        int A[n];
        for(int i=0;i<n;++i){
            cin>>A[i];
            if(A[i]==1)c++;
        }
        
        for(int i=0;i<q;++i){
            int x;
            cin>>x;
            if(x==1){
                int z;
                cin>>z;
                if(A[z-1]==1){
                    A[z-1]=0;
                    c--;
                }
                else {
                    A[z-1]=1;
                    c++;
                }
            }
            else{
                int k;
                cin>>k;
                if(k>c)cout<<0<<endl;
                else cout<<1<<endl;
            }
        }
    
}
