/*
Platform :- Codeforces
Contest :- Educational round 104
Problem :- B - Cat Cycle
*/

#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    
    while(t--){
          long long n,k;
          cin>>n>>k;
          k--;
          if(n%2==0){
              cout<<((k%(n))+1)<<endl;
          }
          else{
              long long temp=(k+(k/(n/2)))%n+1;
              cout<<temp<<endl;
          }
        
    }
}
