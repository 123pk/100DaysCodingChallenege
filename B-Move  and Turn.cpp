/*
Platfrom :- Codeforces
Problem  :- B- Move and Turn
Approach :- I don't have any explanation about my approach it is just the pattern that I saw in test cases

*/

#include<bits/stdc++.h>

using namespace std;

int main() {
   
       int n;
       cin>>n;
       if(n%2){
           cout<<((n+1)*(n+3)/2)<<endl;
           }
           else{
               cout<<((n/2+1) * (n/2+1))<<endl;
           }
   
}
