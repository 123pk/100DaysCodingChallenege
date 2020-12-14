/*
Platform :- CODECHEF
Problem :- EVEN PAIR SUM (EVENPSUM)
Approach :- we know (odd+odd)= even and (even+even)=even so we did the same we will find no of even numbers till A and multiply
            with number of even numbers of B because these always pairs are possible . Total number of even numbers till N is (N/2) and odd numbers is (N+1)/2
*/
#include <iostream>

using namespace std;

int main() {
   int t;
   cin>>t;
   
   while(t--)
   {
       long long A,B;
       cin>>A>>B;
       
       long long temp1=(A/2)*(B/2);
       long long temp2=((A+1)/2)*((B+1)/2);
       
       long long ans=temp1+temp2;
       cout<< ans <<endl;
       
       
   }
}
