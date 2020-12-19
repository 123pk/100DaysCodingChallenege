/*
Platform ;- Codechef 
Problem :- Array Swaps
Approach :- Thing to notice that if the elements of B for ( 0 <= i <m ) and mx= min of all element in A if B[i]<mx then we need to push it to the end which will cost you "n"
            swaps else for others you don't need to add any swap

*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n,m;
cin>>n>>m;

long long A[n];


for(int i=0;i<n;++i){
    cin>>A[i];
 
}
sort(A,A+n);


long long B[m];
for(int i=0;i<m;++i){
   
    cin>>B[i];
    
}
long long ans=0;
sort(B,B+m);
for(int i=0;i<m;++i){
    if(B[i]<A[0]){
        ans+=n;
    }
    else{
        break;
    }
}
cout<<ans<<endl;

   
}
