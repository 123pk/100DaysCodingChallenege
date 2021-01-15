/*
Platform :- Topcoder
Problem :- Friend Finder
*/

#include<bits/stdc++.h>
using  namespace std;
class  FriendFinder{
    public:
    int distance(string line){
        int s=0,e=0;
        for(int i=0;i<line.size();++i){
            if(line[i]=='S'){
                s=i+1;
            }
            else if(line[i]=='F'){
                e=i+1;
            }
        }
        
        return abs(s-e);
    }
};
