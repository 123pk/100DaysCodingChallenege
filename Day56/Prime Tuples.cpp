/*
Platform :-  Codechef
Problem :- Prime Tuples
Approach :- find all prime number less than 1000000 efficiently and if gap between two primes is 2 add it to you count and binary search
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    vector< int>P;
            for(int i=2;i<=1000000;++i){
                int f=0;
                for( int j=2;j*j<=i;++j){
                    if(i%j==0){
                        f=1;
                        break;
                    }
                }
                if(f==0){
                    P.push_back(i);
                }
            }
            
     int z=0;
     vector<int>ans(P.size());
     for(int i=0;i<P.size();++i){
         if(i==0){
             ans[i]=z;
         }
         else{
             if((P[i]-P[i-1]) == 2){
                 z++;
             }
         }
         ans[i]=z;
     }
    while(t--){
        int n;
        cin>>n;
        
        if(n<=4){
            cout<<0<<endl;
        }
        else{
            
            
            int d=0;
            int start=0,end=P.size()-1;
            int mid=(start+end)/2;
            int f=0;
            while(start<end){
                if(P[mid]== n){
                    d=ans[mid];
                    break;
                }
                else{
                    if(P[mid]>n){
                        end=mid-1;
                        int temp=(start+end)/2;
                        mid=temp;
                    }
                    else{
                        start=mid+1;
                        int temp=(start+end)/2;
                         
                            mid=temp;
                         
                    }
                }
                if((P[mid]<n)&&(P[mid+1]>n)){
                    d=ans[mid];break;
                }
                 
            }
            if(f==0){
                d=ans[mid];
            }
        
            cout<<d<<endl;
        }
    }
}
