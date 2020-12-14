/*
Platform :- Codechef 
Problem :- Vaccine1 December Long
Approach :- we will get 'b' vaccine from company 1 from day 'a' and simlarly will get 'd' from day'c'
            we will run a loop and take care of above condititons.
*/

#include <iostream>

using namespace std;

int main() {
   int a,b,c,d,e;
   cin>>a>>b>>c>>d>>e;
   
   int f=0,g=0,x=0,tot=0;
   while(tot<e){
       x++;
       if(f) tot+=b;
       else{
           if(x==a){
               f=1;
               tot+=b;
           }
       }
       
       if(g) tot+=d;
       else{
           if(x==c){
               g=1;
               tot+=d;
           }
       } 
       
       //cout<<tot<<" "<<x<<endl;
   }
   
   cout<<x<<endl;
}
