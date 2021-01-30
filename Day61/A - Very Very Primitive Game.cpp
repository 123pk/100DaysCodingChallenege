/*
Platform :- Atcoder
Contest :- Atcoder Beginner Contest 190
Problem :- A - Very Very Primitive Game
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,c;
    cin>>a>>b>>c;
    
    if(c){
        if(b>a){
            cout<<"Aoki"<<endl;
        }
        else{
            cout<<"Takahashi"<<endl;
        }
    }
    else{
        if(a>b){
            cout<<"Takahashi"<<endl;
        }
        else{
            cout<<"Aoki"<<endl;
        }
    }
}
