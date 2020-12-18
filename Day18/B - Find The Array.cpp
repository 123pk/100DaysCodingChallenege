/*
Platform :- Codeforces
Problem :- B - Find The Array
Approach :- This problem is good problem you need to observe carefully , it is not very hard but it is all on your observations skills 
            the approach that I have used is find two sums ( sum1 = odd index element sum  & sum2= even index element sum )
            i . if sum1>sum2 --> then make all the even terms 1 as sum2 is less than half of total sum of array so the sum of difference of even indexed element and 1 
                is going to less then (totalsum/2) hence our condition is always satisifed .   
            ii. elese we do vice versa for odd indexes 
*/

#include<bits/stdc++.h>
using namespace std;

int  main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        long int A[n];
        long long sum1=0,sum2=0;
        for(int i=0;i<n;++i){
            cin>>A[i];
            if(i%2)sum1+=A[i];
            else sum2+=A[i];
        }
        
        if(sum2>sum1){
            for(int i=0;i<n;++i){
                if(i%2){
                    cout<<1<<" ";
                }
                else{
                    cout<<A[i]<<" ";
                }
            }
            cout<<endl;
        }
        else{
            for(int i=0;i<n;++i){
                if(i%2==0){
                    cout<<1<<" ";
                }
                else{
                    cout<<A[i]<<" ";
                }
            }
            cout<<endl;
        }
    }
}
