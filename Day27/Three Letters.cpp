/*
Platform :- codechef
Problem :- Three Letters ( December Lunchtime )         
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        string s;
        cin>>s;
        map<char,int>P;
        int tot=0;
        for(auto x:s)P[x]++;
        int temp1=0;
        for(auto x:P){
            if(x.second%2){
                temp1++;
                x.second--;
            }
            tot+=x.second/2;
        }
        if(tot<=temp1){
            tot=tot;
        }
        else{
            int temp=tot-temp1;
            temp*=2;
            temp/=3;
            tot=temp1+temp;
        }
        cout<<tot<<endl;
        
    }
}
