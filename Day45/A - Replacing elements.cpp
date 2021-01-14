/*
Platform :- Codeforces
Problem :- A - Replacing elements 
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long int d;
        cin>>n>>d;
        
        long int A[n];
        for(int i=0;i<n;++i){
            cin>>A[i];
        }
        sort(A,A+n);
        if((A[n-1]<=d)){
            cout<<"YES"<<endl;
        }
        else{
            if((A[0]+A[1])<=d){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}
