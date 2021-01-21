/*
Platform :- Google Kickstart Practise Round 2019
Problem :- Number Guessing
Approach :- Binary search
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long int a,b;
        cin>>a>>b;
        
        long int n;
        cin>>n;
        long int start=a+1,end=b;
        long int mid=(start+end)/2;
        string s1,s2,s3;
        s1="CORRECT";
        s2="TOO_SMALL";
        s3="TOO_BIG";
         int f=0;
        while(n--){
            cout<<mid<<endl ;
            string zz;
            cin>>zz;
             
            if(zz==s1){
                cout<<flush ;
                break;
            }
            else if(zz==s2){
                start=mid+1;
                mid=(start+end)/2;
            }
            else if(zz == s3){
                end=mid-1;
                mid=(start+mid)/2;
            }
            else{
                cout<<flush ;
                exit(0);
            }
             cout<<flush ;
        }
        
         
    }
}
