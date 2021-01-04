/*
Platform :- Codeforces
Problem :- B - Fair Division 
Approach :-  If you will read the problem you will find that your answer depends on number of 1's in array , let x= no of 1's in array
            then 
            Case 1 :- if ( x == 0) then we can equally distribute if number of 2's is even
            Case 2 :- if ( x % 2 == 0 ) the also we can eqally distribute 
            Case 3 :-  we can't be able to distribute equally
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int A[n];
        int c=0;
        for(int i=0;i<n;++i){
            cin>>A[i];
            if(A[i]==1)c++;
        }
        
        if(c && c%2==0)cout<<"YES"<<endl;
        else {
            if(c==0){
                if((n)%2==0){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
                else cout<<"NO"<<endl;
        }
    }
}
