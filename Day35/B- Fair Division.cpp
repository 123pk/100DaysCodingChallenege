/*
Platform :- Codeforces
Problem :- B - Fair Division 
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
        int c=0;
        for(int i=0;i<n;++i){
            cin>>A[i];
            if(A[i]==1)c++;
        }
        
        if(c && c%2==0)cout<<"YES"<<endl;
        else {
            if(c==0){
                if((n)%2==0){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
                else cout<<"NO"<<endl;
        }
    }
}
