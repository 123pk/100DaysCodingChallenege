/*
Platform :- Topcoder
Problem :- Paired Multiple
*/

#include <bits/stdc++.h>

using namespace std;

class  PairedMultiples{
    public:
    int selectedTotal(vector <int> A, int c){
         int d=0;
         for(int i=0;i<A.size();++i){
             
             for(int j=0;j<A.size();++j){
               if(i==j)continue;
                 if((A[i]+A[j])%c==0)
                 {
                     d+=A[i];
                     break;
                 }
             }
         }
          
          
         return d;
     }
};
