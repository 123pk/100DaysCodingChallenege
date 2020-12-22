/*
Problem :- Self-Destructing string
Approach :- Carefully analyse the problem , you will find that 
            i. No need to make any changes in string if number of ( '0's == number of '1's )
            ii. if string contains all '0's or all '1's then print -1 or when ( abs(number of 0's - number of 1's ) % 2 ==1 )
            iii. else it is always possible to fix the string in abs( (number of 0's - number of 1's ) )/2 ways
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        int c=count(s.begin(),s.end(),'1');
        int d=s.size()-c;
        if(c==s.size()||c==0)cout<<-1<<endl;
        else if(c==d ){
            cout<<0<<endl;
        }
        else{
            if((abs(c-d)%2)){
                cout<<-1<<endl;
            }
            else{
                cout<<(abs(c-d)/2)<<endl;
            }
        }
    }
}
