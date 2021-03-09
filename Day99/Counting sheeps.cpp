/*
Platform :- Coding competition with google 
Problem :- Counting sheeps 
Contest :- Google codejam 2016 qualification round
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int z=1;z<=t;++z){
        cout<<"Case #"<<z<<": ";
        long long n;
        cin>>n;
        int f=0;
        if(n==0){
            f=1;
        }
        else{
            long long temp;
            long long d=1;
            vector<int>A(10);
            while(1){
                temp=d*n;
                while(temp){
                    A[temp%10]++;
                    temp/=10;
                }
                int g=0;
                for(int i=0;i<10;++i){
                    if(A[i]<1){
                        g=1;break;
                    }
                }
                if(g==0){
                    n=d*n;
                    break;
                }
                d++;
            }
        }
        
        if(f)cout<<"INSOMNIA"<<endl;
        else cout<<n<<endl;
    }
}
