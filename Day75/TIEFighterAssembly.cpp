/*
Platform :- Topcoder
Contest :- SRM 800
Problem :- TIEFighterAssembly
*/

#include<bits/stdc++.h>
using namespace std;

class  TIEFighterAssembly{
    public:
        int assemble(string s){
            map<char,int>P;
            for(auto x:s)P[x]++;
            
            int c=P['|'];
            int d=P['-'];
            int e=P['O'];
            c/=2;
            d/=2;
            return min(c,min(d,e));
            }
    };
