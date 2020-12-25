/*
Platform :- Codeforces
Problem :- Waste sorting
Approach :- 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        
        long long A[5];
        for(int i=0;i<5;++i){
            cin>>A[i];
        }
        if(A[0]>a || A[1]>b || A[2]>c){
            cout<<"No"<<endl;
            continue;
        }
        int f=0;
        long long res1=0,res2=0,res3=0;
        res1=A[0]+A[3];
        res2=A[1]+A[4];
        if(res1<=a){
            if(res2<=b){
                res3+=A[2];
                if(res3<=c){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
            }
            else{
                res3=res2-b;
                res3+=A[2];
                if(res3<=c){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
            }
        }
        else if(res2<=b){
            res3=res1-a;
                res3+=A[2];
                if(res3<=c){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
        else{
            res3=res1-a;
            res3+=res2-b;
            res3+=A[2];
            if(res3<=c){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
}
