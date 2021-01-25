/*
Platform :- Codeforces
Problem :- B - New Years Number 
Hint :- Brute force all possible values less than n
*/

#include<bits/stdc++.h>
 
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
          long int n;
          cin>>n;
          if(n<2020){
              cout<<"NO"<<endl;
              continue;
          }
          
          if(n%2020==0 || n%2021==0){
              cout<<"YES"<<endl;
              continue;
          }
          int f=0;
          for(int i=0;i<=1000;++i){
              for(int j=0;j<=1000;++j){
                  long int temp=(i*2020)+(j*2021);
                  if(temp==n){
                      f=1;break;
                  }
                  if(temp>n)break;
              }
              if(f)break;
          }
          
          if(f)cout<<"YES"<<endl;
          else cout<<"NO"<<endl;
    }
}
