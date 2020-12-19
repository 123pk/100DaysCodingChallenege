/*
Platform :- Atcoder 
Problem :- B- Blocks on Grid
Approach :- Find the minimum element in grid and prict the cost of making all element equal to that minimum element which is ( total_sum - m*n*mn) where (m = no of column)
           ( n = number of rows) and ( mn= minimum element in grid )
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    
    long int A[n][m];
    long long tot=0;
    long int mn=0;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>A[i][j];
            tot+=A[i][j];
            if(i==0 && j==0)mn=A[i][j];
            mn=min(mn,A[i][j]);
        }
    }
    
    long long ans=tot-(m*n*mn);
    cout<<ans<<endl;
    
}
