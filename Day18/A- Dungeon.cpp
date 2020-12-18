/*
Platform :- Codeforces
Problem :- A - Dungeon
Approach :- If you will analyse the problem you will find that you will have solution when ( ( a+b+c) % 9 == 0 ) and the min( a , min( b,c)) > z where (z = tot/9)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long int a,b,c;
        cin>>a>>b>>c;
        long long tot=a+b+c;
        if(tot<9)cout<<"NO"<<endl;
        else{
            long int mn=min(a,min(b,c));
            long int z=tot/9;
            if(tot%9)z++;
            
            if(tot%9==0){
                if(z<=mn)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}
