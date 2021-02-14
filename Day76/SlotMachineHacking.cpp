/*
Platform :- Topcoder
Contest :- SRM 800
Problem :- SlotMachineHacking
*/

#include<bits/stdc++.h>
using namespace std;
class  SlotMachineHacking{
    public:
        int win(vector <string> rl, vector <int> st){
            for(int i=0;i<st.size();++i){
                st[i]=st[i]%rl[i].size();
            }
            
            int n=100000;
            int f=0;
            int tot=0;
            while(n--){
                int g=0;
                for(int i=0;i<rl.size();++i){
                    string temp;
                    for(int j=st[i];j<rl[i].size();++j){
                        temp+=rl[i][j];
                    }
                    for(int j=0;j<(st[i]);++j){
                        temp+=rl[i][j];
                    }
                    rl[i]=temp;
                }
                
                for(int i=0;i<rl.size();++i){
                    
                    if(rl[i][0]!='c'){
                        g=1;break;
                    }
                }
                
                tot++;
                if(g==0){
                    f=1;break;
                }
            }
          if(f) return tot-1;
          return -1;
        }
    };
