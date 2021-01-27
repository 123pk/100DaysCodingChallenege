/*
Platform :- Codeforces
Event :- GYM Noobs Round 2
Problem :- Directional move
Hint :- Brute force
*/

#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        string s;
        cin>>s;
        char ch='E';
        for(int i=0;i<n;++i){
            if(s[i]=='1'){
                if(ch=='E'){
                    ch='N';
                }
                else if(ch=='W'){
                    ch='S';
                }
                else if(ch=='N'){
                    ch='W';
                }
                else{
                    ch='E';
                }
            }
            else{
                if(ch=='E'){
                    ch='S';
                }
                else if(ch=='W'){
                    ch='N';    
                }
                else if(ch=='N'){
                    ch='E';
                }
                else{
                    ch='W';
                }
            }
        }
        cout<<ch<<endl;
    }
}
