/*
Platform :- Codechef
Contest :- January Lunchtime 2021
Problem :- Dream of Divisibility
Hint :- replace each element of array by (A[i]%k) then multiply it by 2 until value is less than 1e9 
        if the value is not divisible by 'k' after this then it will 'never be divisible' 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        
        long long A[n];
        for(int i=0;i<n;++i){
            cin>>A[i];
            A[i]=A[i]%k;
        }
        
        int f=0;
        for(int i=0;i<n;++i){
            if(A[i]){
                while(A[i]<100000000){
                    A[i]*=2;
                    if(A[i]%k==0){
                     break;
                  }
                }
                if(A[i]%k){
                    f=1;break;
                }
            }
        }
        if(f)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
