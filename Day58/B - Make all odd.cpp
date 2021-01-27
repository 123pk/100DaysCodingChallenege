/*
Platform :- Codeforces
Event :- GYM Noobs round 2
Problem :- Make all odd
hint :- all depends on presence of even number 
*/

#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        long int A[n];
        int c=0;
        for(int i=0;i<n;++i){
            cin>>A[i];
            if(A[i]%2){
                c++;
            }
        }
        
        if(c==0){
            cout<<-1<<endl;
        }
        else if(c==n){
            cout<<0<<endl;
        }
        else{
            cout<<(n-c)<<endl;
        }
        
    }
}
