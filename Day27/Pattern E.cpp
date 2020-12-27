/*
Platform :- Codechef
Problem :- Pattern E
Approach :- Analyse and bruteforce
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        vector<int>A;
        for(int i=1;i<=n;++i)A.push_back(i);
        for(int i=0;i<n;++i){
            for(int j=i;j<n;++j){
                cout<<A[j];
            }
            for(int j=0;j<i;++j){
                cout<<A[j];
            }
            cout<<endl;
            
        }
    }
}
