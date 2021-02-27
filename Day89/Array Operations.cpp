/*
Platform :- Hackerearth
Contest :- Hackerearth February Circuit
Problem :- Array Operations
Hint:- Prefix and Suffix array with maximum sun using kaden's algorithm
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        long int A[n];
        for(int i=0;i<n;++i)cin>>A[i];

        vector<long long>P;
        int f=0;
        long long temp1=0,temp2=0;
        for(int i=0;i<n;++i){
            if(f){
               if(A[i]<0){
                   temp1+=A[i];
                   if(i==n-1){
                       P.push_back(temp1);
                   }
               }
               else{
                   P.push_back(temp1);
                   temp2+=A[i];
                   f=0;
                   temp1=0;
                   if(i==n-1){
                       P.push_back(temp2);
                   }
               }
            }
            else{
                if(A[i]<0){
                    f=1;
                    P.push_back(temp2);
                    temp2=0;
                    temp1+=A[i];
                    if(i==n-1){
                        P.push_back(temp1);
                    }
                }
                else{
                    temp2+=A[i];
                    if(i==n-1){
                        P.push_back(temp2);
                    }
                }
            }

        }
       
      long long ans=0;
      if(P.size()==1){
          ans=max(0LL,P[0]);
      }
      else{
          int size=P.size();
           

          long long pref[size];
          long long temp=0,mx=0;
         for(int i=0;i<size;++i){
             temp+=P[i];
             if(temp<0)temp=0;
             mx=max(mx,temp);
             pref[i]=mx;
         }    
          

          reverse(P.begin(),P.end());

          temp=0;mx=0;
          long long suff[size];
          for(int i=0;i<size;++i){
             temp+=P[i];
             if(temp<0)temp=0;
             mx=max(mx,temp);
             suff[i]=mx;
         }
         for(int i=0;i<size-1;++i){
             ans=max(ans,pref[i]+suff[size-2-i]);
         }

         if(size%2){
             long long temp1= pref[size/2]+suff[(size/2)-1];
             long long temp2= pref[(size/2)-1]+suff[size/2];
             ans=max(ans,max(temp1,temp2));
         }
      }
      
      cout<<ans<<endl;
        
    }
}
