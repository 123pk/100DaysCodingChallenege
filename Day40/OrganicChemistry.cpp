/*
Platform :- Topcoder
Problem :- OrganicChemistry
*/
#include<bits/stdc++.h>
using namespace std;
class OrganicChemistry{
    public:
    int countHydrogens(string atoms, vector <int> X, vector <int> Y){
        vector<pair<char,int>>P;
        for(auto x:atoms){
            if(x=='O'){
                P.push_back({'O',2});
            }
            else {
                if(x=='N'){
                    P.push_back({'N',3});
                }
                else{
                    P.push_back({'C',4});
                }
            }
        }
        
        for(int i=0;i<X.size();++i){
            P[X[i]].second--;
            P[Y[i]].second--;
            //cout<<P[X[i]].second<<" "<<P[Y[i]].second<<endl;
        }
        int tot=0;
        for(auto x:P){
            tot+=x.second;
        }
        return tot;
        
    }
};
