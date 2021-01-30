/*
Platform :- Atcoder
Contes :- Atcoder Beginner Contest 190
Problem :- B - Magic 3
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long int S,D;
    cin>>n>>S>>D;
    
    int f=0;
    for(int i=0;i<n;++i){
        long int x,y;
        cin>>x>>y;
        if(x<S && y>D){
            f=1;
        }
    }
    if(f)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    
    
}
