/*
Platform :- Codeforces
Problem :- A- In Game Chat
Approach :- let (c = count the the number of ')' ) from end and compare with ( n-c)

*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        string s;
        cin>>s;
        
        int f=0;
        int d=0;
       
        for(int i=n-1;i>=0;--i){
            if('a'<=s[i] && s[i]<='z'){
                break;
            }
            else{
                d++;
            }
        }
        
        int c=n-d;
        
        if(c>=d){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
}
