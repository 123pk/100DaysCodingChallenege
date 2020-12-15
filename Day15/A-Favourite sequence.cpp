/*
Platform:- Codeforces
Problem :- A-Favourite Sequence
Aproach :- First print 1st elemnt then last then 2 and 2nd last and so on..
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        long int A[n];
        for(int i=0;i<n;++i){
            cin>>A[i];
        }
        
        int j=n-1,i=0;
        if(n%2){
            while(i<=j){
                if(i==j){
                    cout<<A[i]<<endl;
                    break;
                }
                cout<<A[i]<<" ";
                i++;
                cout<<A[j]<<" ";
                j--;
            }
        }
        else{
            while(i<=j){
               cout<<A[i]<<" ";
                i++;
                cout<<A[j]<<" ";
                j--; 
            }
            cout<<endl;
        }
    }
}
