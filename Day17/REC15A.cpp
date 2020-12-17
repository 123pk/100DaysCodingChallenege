/*
Platform :- Codechef
Problem :- EQUAL ( REC15A)
Approach :- we need to make all elements of array equal there are two case
          1. Case 1 when all are equal print-->0
          2. Case 2 has two sub parts 
               i. when all elements or array are either odd or either even only ---print (n)
               ii. we find the cost for changing all numbers into odd number , let it cost ( d )
                    we find the cost for changing all numbers into even number , let it cost ( c )
                    answer is min( c , d )
           Note :- we can subtract or add odd number only from any number. So if we want to chage from even to odd --> 1 operation and odd-> odd ( 2 operation ) and vice versa
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
        int c=0;
        set<long int>P;
        for(int i=0;i<n;++i){
            cin>>A[i];
           if(A[i]%2==0)c++;
        }
        
        if(c && (n-c)){
            int d=n-c;
        int mx1=(c+(d-1)*2);
        int mx2=(d+(c-1)*2);
        
        cout<<min(mx1,mx2)<<endl;
        }
        else{
              if(n==1)cout<<0<<endl;
              else{
                  cout<<(n)<<endl;
              }
                
            
        }
        
    }
}
