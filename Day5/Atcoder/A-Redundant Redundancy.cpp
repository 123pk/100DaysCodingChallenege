/*
Platform :- Atcoder
Prolem :- A-Redundant Redundancy
Approach :- we need to find a number 'x' for a given number 'n such that every elemeny 2<=y<=n , x%y=1
             always . It is standard question we need to find LCM of all numbers from 2 to n and that is our answer.
             For lcm we know that LCM(x,y)= (x*y)/GCD(x,y) 
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    long long x=2;
    for(long long i=2;i<=n;++i){
        x=(x*i)/(__gcd(x,i));
      
    }
    x++;
   
    cout<<(x)<<endl;
}
