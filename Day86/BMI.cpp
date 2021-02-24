/*
Platform :- Codechef
Problem :- BMI
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long h,w;
        cin>>h>>w;
        
        long long z=w*w;
        long long temp=(h)/(z);
        if(h%(z))temp++;
        
        if(temp<=18)cout<<1<<endl;
        else if(19<=temp && temp<=24){
            cout<<2<<endl;
        } 
        else if(25<=temp && temp<=29)cout<<3<<endl;
        else cout<<4<<endl;
    }
}
