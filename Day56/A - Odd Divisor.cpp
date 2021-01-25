/*
Platform :- Codeforces
Problem:- A - Odd Divisors
Approach :- divide n by two until you find odd number > 1 then yes else no
*/

#include<bits/stdc++.h>
 
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        
        if(n%2){
            cout<<"YES"<<endl;
            continue;
        }
         
        
        int f=0;
        while(n){
            n/=2;
            if(n%2){
                break;
            }
        }
        if(n==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
