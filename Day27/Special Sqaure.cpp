/*
Platform :- Codedrills
Problem :- Perfect Square
Link :- https://codedrills.io/contests/amrita-icpc-practice-session-2/problems/special-square
*/
#include<bits/stdc++.h>
using namespace std;


    
int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,m;
        cin>>n>>m;
        
        long int A[n][m];
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j)
            cin>>A[i][j];
        }
        
        int f=0;
        for(int i=0;i<n-1;++i){
            for(int j=0;j<m-1;++j){
                if(A[i][j]==A[i][j+1] && A[i][j]==A[i+1][j] && A[i][j]==A[i+1][j+1]){
                    f=1;break;
                }
            }
        }
        
        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
}
