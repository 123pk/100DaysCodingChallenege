/*
 Platform :- Codeforces 
 Question :- Suffix Operations (Codeforces Round #688 (Div. 2))
 Approach :- It was a pretty good question . 
             My approach for this question was to find the maximum value of ( abs(A[i]-A[i-1]) + abs( A[i]-A[i+1]) - abs( A[i-1]-A[i+1]) )
             I will tell you why , let us take example [ 1, 4 ,3 ,2 ,4 ,1] . We can change any element to any value such the total is minimised 
             we will change that element whose above value is maximum .
             The solution is the  (' total ' - ' maximum above value ') 
             
             Edge case :- when the maximum of above values is less than absolute value of first two and last two elemnts . let z=max(abs(A[0]-A[1]),abs(A[n-1]-A[n-2]))
             the answer is minimum of ( total-max_above_value , total -z)
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
        long long tot=0;
        long int mx2=0;
        for(int i=0;i<n;++i){
            cin>>A[i];
            if(i>0){
                tot+=abs(A[i]-A[i-1]);
            }
        }
        
        if(n==2){
           cout<<0<<endl;
           continue;
         }
        
        mx2=max(mx2,abs(A[0]-A[1]));
        mx2=max(mx2,abs(A[n-1]-A[n-2]));
        
        long int mx=0;
        for(int i=1;i<n-1;++i){
            long int temp=abs(A[i]-A[i-1])+abs(A[i]-A[i+1]);
            temp-=abs(A[i-1]-A[i+1]);
            mx=max(mx,temp);
        }
     
        long long z=tot-mx;
        long long z2=tot-mx2;
        
        cout<<(min(z,z2))<<endl;
    }
}
