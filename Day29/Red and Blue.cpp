/*
Platform :- Codeforces
Problem :- B. Red and Blue
Approach :- We need to find the maximum value sum which can be easily calculated by prefix sum , find the maximum value of prefix sum of both arrays and print the maximum value
           out of them if all is negative print 0
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        int A[n];
        int tot1=0,tot2=0,mx=INT_MIN,mx2=INT_MIN;
        for(int i=0;i<n;++i){
            cin>>A[i];
            tot1+=A[i];
            mx=max(mx,tot1);
        }
        
        int m;
        cin>>m;
        
        int B[m];
        for(int i=0;i<m;++i){
            cin>>B[i];
            tot2+=B[i];
            mx2=max(mx2,tot2);
        }
        
        int tot=mx+mx2;
        tot=max(tot,max(mx,mx2));
        tot=max(0,tot);
        cout<<tot<<endl;
    }
}
