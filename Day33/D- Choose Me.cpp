/*
Platform :- Atcoder
Problem :- D - Choose Me
*/

#include<bits/stdc++.h>
using namespace std;

bool comp(pair<long int,long int>P,pair<long int,long int>Q){
    long long temp1=P.first*2+P.second;
    long long temp2=Q.first*2+Q.second;
    if(temp1==temp2)return P.first>Q.first;
    return temp1>temp2;
}

int main(){
    int n;
    cin>>n;
    
    int c=0;
    long long temp=0;
    vector<pair<long int,long int>>A;
    for(int i=0;i<n;++i){
        long int x,y;
        cin>>x>>y;
        A.push_back(make_pair(x,y));
        temp+=y;

    }
    
    sort(A.begin(),A.end(),comp);
    
    long long temp2=0;
    for(auto x:A){
        
        temp2+=(x.first+x.second);
       
        zz-=x.first;
       
        c++;
        if(zz<temp2)break;
    }
    cout<<c<<endl;
    
}
