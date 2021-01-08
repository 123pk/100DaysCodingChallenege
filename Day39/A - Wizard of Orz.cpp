/*
Platform :- Codeforces
Problem :- A - Wizard of Orz
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        int z=n%10;
        vector<int>A;
        for(int i=0;i<=9;++i){
            A.push_back(i);
        }
        if(n==1){
            cout<<9<<endl;
            continue;
        }
        cout<<98;
        if(n==2){
            cout<<endl;
        }
        else{
            cout<<9;
            for(int i=1;i<=(n-3);++i){
                cout<<(A[(i-1)%10]);
            }
            cout<<endl;
        }
        
        
        
    }
}
