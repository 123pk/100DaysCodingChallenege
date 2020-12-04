/*
  Platform  :- Codeforces
  Question :- Cancel the Trains ( Codeforces Round #688 (Div. 2))
  Approach :- Count the elements that are present in both the arrays 
             I have used map for storing all the elements in first array and 
             when I find any element in second array that is already present in first array
             we increment the count
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        
        int n,m;
        cin>>n>>m;
        
        map<long int,int>P;
        for(int i=0;i<n;++i){
            long int x;
            cin>>x;
            P[x]++;
        }
        int c=0;
        for(int i=0;i<m;++i){
            long int x;
            cin>>x;
            if(P[x])c++;
        }
        cout<<c<<endl;
        
    }
}
