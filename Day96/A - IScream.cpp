/*
Platform :- Atcoder
Problem :- A  - I Scream
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a,b;
    cin>>a>>b;
    
    long long temp=a+b;
    if((temp>=15) && (b>=8)){
        cout<<"1"<<endl;
    }
    else if((temp>=10 && (b>=3))){
        cout<<"2"<<endl;
    }
    else if((temp>=3))
    {
      cout<<"3"<<endl;   
    }
    else{
        cout<<"4"<<endl;
    }
}
