/*
Platform :- Codeforces
Event :- GYM Noobs round 2
Problem :- Xor Game
Hint :- find all xor values or max or ( a,b) to 1...min(a,b)
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        
        long int ans=n xor k;
     
        int temp=max(n,k);
        int f=0;
        for(int i=1;i<=min(n,k);++i)
        {
            long int z=temp xor i;
           
            if(z>ans){
                f=1;break;
            }
        }
      
          
          if(f)cout<<"Yes"<<endl;
          else cout<<"No"<<endl;
    }
}
