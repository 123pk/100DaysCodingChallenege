/*
Platform :- CODECHEF
Problem :- Positive Prefixes 
Approach :- we will divide into two cases. 
           Case 1:- when k > (n-k) In this case we will run a loop from 1 to n and till i<=(n-k) we will print -ve even numbers and +ve odd numbers 
                    after i>(n-k) we print all even numbers 
           Case 2:- when k<(n-k) we will print -ve even numbers and positive odd numbers till (i<=k) and afterwards we will print all values with -ve sign.
           You can easily verify with example

*/

#include <iostream>

using namespace std;

int main() {
   int t;
   cin>>t;
   
   while(t--)
   {
       int n,k;
       cin>>n>>k;
       int z=n-k;
       if(z<k)
       {
          
          for(int i=1;i<=n;++i)
          {
              if(z){
                  if(i%2==0){
                      cout<<(-i)<<" ";
                      z--;
                  }
                  else cout<<i<<" ";
              }
              else{
                  cout<<(i)<<" ";
              }
          }
          cout<<endl;
          continue;
       }
       
       for(int i=1;i<=n;++i)
          {
              if(k){
                  if(i%2==0){
                      cout<<(i)<<" ";
                      k--;
                  }
                  else cout<<(-i)<<" ";
              }
              else{
                  cout<<(-i)<<" ";
              }
          }
          cout<<endl;
       
   }
}
