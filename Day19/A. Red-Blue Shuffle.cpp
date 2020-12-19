/*
Platform :- Codeforces
Problem :- A. Red-Blue Shuffle
Approach :- traverse through string s &p from 0<=i<n and  ( c = number of digits in s[i] > p[i] ) ( d= number of digits in p[i]>s[i])
           if( c == d) ---> EQUAL
           if( c > d) -----> RED
           else ------------> BLUE

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,p;
        cin>>s>>p;
        
        int f=0,g=0;
        for(int i=0;i<n;++i){
            if(s[i]<p[i]){
                f++;
                
            }
            else if(p[i]<s[i]){
                g++;
                
            }
        }
        
        if(f==g)cout<<"EQUAL"<<endl;
        else if(f>g){
           cout<<"BLUE"<<endl;
        }
        else{
            cout<<"RED"<<endl;
        }
    }
}
