/*
Platform :- Codechef
Problem :- Efficient Delivery
Approach :- [ Partially correct only test case type 1 ]
            As Y[i] = Y[i-1] for test case part 1 . we need to find the absolute difference between  x1 & x2 and add it to total as highway is constructed for that Y[i]
            so tot= 2*( abs ( y2-y1) ) + abs( x2-x1 )
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
   
       
           
           long long n,m,k;
           cin>>n>>m>>k;
           
           long long tot=0,temp1=0,temp2=0;
           for(int i=0;i<k;++i){
               long long x1,y1,x2,y2;
               cin>>x1>>y1>>x2>>y2;
              
                   tot+=abs(x1-x2);
                   tot+=(abs(y2-y1)*2);
               
           }
           cout<<(tot)<<endl;
           
       
   
}
