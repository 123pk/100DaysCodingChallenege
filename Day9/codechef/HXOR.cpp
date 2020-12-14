/*
COMPLETE SOLUTION WILL BE ADDED AFTER CONTEST IS OVER 

Platform :- Codechef
Question :- Hail Xor ( Codechef long 2020 December )
Approach :- For each A[i] we will try to find A[j] such that i<j<=n-1 and (A[i] xor p < A[i]) && (A[j] xor p < A[j]) greedily 

*/

#include<bits/stdc++.h>
using namespace std;


int main(){
   
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long int x;
        cin>>n>>x;
        
        long int A[n];
        int c=0;
        for(int i=0;i<n;++i){
            cin>>A[i];
            if(A[i]%2)c++;
        }
      
        int j=0;
        int i=0;
        while(j<(n-1)){
            if(A[j]==0){
                j++;
                continue;
                
            }
            long int temp = A[j];
            long int xx=1,z;
            while(xx<temp){
                xx*=2;
            }
            if(xx!=temp){
                xx/=2;
            }
            z=xx;
            int q;
            for(q=j+1;q<n-1;q++){
                if((A[q] xor z)<A[q]){
                    break;
                }
                
            }
            A[j]=A[j] xor z;
            A[q]=A[q] xor z;
            i++;
            if(i==x)break;
        }
         
         long int final=x-i;
        if((n==2 && final>0) && (final%2!=0)){
            A[n-1]= A[n-1] xor 1;
            A[n-2]= A[n-2] xor 1;
        }
        
        for(auto x:A)cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}
