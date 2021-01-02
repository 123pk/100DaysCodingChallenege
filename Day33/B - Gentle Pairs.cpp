/*
Platform  :- Atcoder
Problem :- B - Gentle Pairs
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int c=0;
    vector<pair<int,int>>A;
    for(int i=0;i<n;++i){
        int x,y;
        cin>>x>>y;
        A.push_back(make_pair(x,y));
    }
    
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            int temp1=A[j].second-A[i].second;
            int temp2=A[j].first-A[i].first;
            float z=float(temp1)/float(temp2);
           
            if(temp2){
               if((z)<=1 && -1<=(z))c++; 
            }
        }
    }
    cout<<c<<endl;
    
}
