/*
Platform :- Codeforces 
Contest :- Codeforces Round #701 Div 2
Problem :- B - Replace and Keep Sorted
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
   int n,q;
   long int k;
   cin>>n>>q>>k;
   
   long int A[n];
   long long pref[n];
   for(int i=0;i<n;++i){
       cin>>A[i];
   }
   
   for(int i=0;i<n;++i){
       if(i==0){
           long long temp=A[i]-1;
            
           if(i+1 <n){
               long long z=A[i+1]-A[i];
               if(z)z--;
               temp+=z;
           }
           pref[i]=temp;
       }
       else{
           long long z=0;
           if(i!=n-1){
               z=A[i+1]-A[i];
               if(z){
                   z--;
               }
           }
           else{
               z+=k-A[i];
               if(z)z--;
           }
            long long temp=A[i]-A[i-1];
            if(temp)temp--;
            temp+=z;
               pref[i]=pref[i-1]+temp;
       }
   }
    
   
   for(int i=0;i<q;++i){
       int x,y;
       cin>>x>>y;
       
       if(x==y){
           cout<<(k-1)<<endl;
       }
       else{
          x--;
          y--;
              
             long long temp=0;
             if((x+1)<=(y-1)){
                 temp=pref[y-1]-pref[x];
             }
              
             long long z=A[x]-1;
             if((x+1)<n){
                 z+=(A[x+1]-A[x]);
                 if(z)z--;
             }
             temp+=z;
             
             long long z2=k-A[y];
             if((y-1)>=0){
                 z2+=(A[y]-A[y-1]);
                 if(z2)z2--;
             }
             temp+=z2;
               
             cout<<temp<<endl;
          
       }
   }
}
