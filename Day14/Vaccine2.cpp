/*
Platform :- Codechef
Problem :- Vaccine 2 
Approach :- We will arrange all people with (age<=9 or age>=80) one side and treat then then we will treat left over peoples with (9<age && age<80)

*/

#include <iostream>

using namespace std;

int main() {
   int t;
   cin>>t;
   
   while(t--)
   {
       int n,d;
       cin>>n>>d;
       
       int A[n];
       int c=0;
       for(int i=0;i<n;++i){
           cin>>A[i];
           if(A[i]<=9 || A[i]>=80)c++;
       }
       
       int e=n-c;
       int ans=(c/d);
       if(c%d)ans++;
       ans+=(e/d);
       if(e%d)ans++;
       cout<<ans<<endl;
   }
}
