/*
Platform :- Codechef
Contest :- Codechef January Lunch Time
Problem :- Even Game
Approach :- if odd numbers count is even player 1 wins else player 2 wins
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        int c=0,d=0;
        for(int i=0;i<n;++i){
            long int x;
            cin>>x;
            
            if(x%2)c++;
            else d++;
        }
        
        if(c%2==0){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
        
    }
}
