/*
Platform :- Codechef
Problem :- Even Difference
Contest :- Codechef January Lunch Time
Approach :- minimum of count of odd and count of even numbers 
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
        
        cout<<min(c,d)<<endl;
    }
}
