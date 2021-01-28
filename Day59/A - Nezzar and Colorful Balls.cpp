/*
Platform :- Codeforces
Contest :- Codeforces Round #698 (Div. 2)
Problem :- A
Hint :- maximum repeating numbers
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        map<long int,long int>P;
        long int mx=0;
        for(int i=0;i<n;++i){
            long int x;
            cin>>x;
            P[x]++;
            mx=max(mx,P[x]);
        }
        cout<<mx<<endl;
    }
}
