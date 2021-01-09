/*
Platform :- Topcoder
Problem :- BuyOneGetOneFree
*/

#include<bits/stdc++.h>
using namespace std;

class BuyOneGetOneFree
    {
    public:
     int buy(vector <int> prices)
         {
         int tot=0;
         sort(prices.begin(),prices.end(),greater<int>());
         int z=(prices.size());
         for(int i=0;i<z;i+=2){tot+=prices[i];}
              return tot;
     }
    };
