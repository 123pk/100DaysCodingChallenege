/*
Platform:- Codeforces
problem :- A. Bovine Dilemmma
Approach :- Find all unique areas of all set of triangles possible 
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
        for(int i=0;i<n;++i){
            cin>>A[i];
        }
        
        set<int>P;
        for(int i=0;i<n;++i){
            for(int j=i+1;j<n;++j){
                float s=A[i];
                float ss=A[j];
                P.insert(ss-s);
            }
        }
        
        cout<<P.size()<<endl;
    }
}
