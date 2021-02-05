/*
Platform :- Codeforces
Contest :- Codeforces Round #699 Div 2
Problem :- A - Space Navigation 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int x,y;
        cin>>x>>y;
        
        string s;
        cin>>s;
        
        map<char,int>P;
        for(int i=0;i<s.size();++i){
            P[s[i]]++;
        }
        
        if(x==0 && y==0)cout<<"YES"<<endl;
        else{
            if(x<0){
                int temp=abs(x);
                if(y<0){
                    int temp2=abs(y);
                    int temp3=P['D'];
                    int temp4=P['L'];
                    if((temp3>=temp2)&&(temp4>=temp )){
                        cout<<"YES"<<endl;
                    }
                    else cout<<"NO"<<endl;
                }
                else{
                     int temp2=abs(y);
                    int temp3=P['U'];
                    int temp4=P['L'];
                    if((temp3>=temp2)&&(temp4>=temp )){
                        cout<<"YES"<<endl;
                    }
                    else cout<<"NO"<<endl;
                }
            }
            else{
                int temp=abs(x);
                if(y<0){
                    int temp2=abs(y);
                    int temp3=P['D'];
                    int temp4=P['R'];
                    if((temp3>=temp2)&&(temp4>=temp )){
                        cout<<"YES"<<endl;
                    }
                    else cout<<"NO"<<endl;
                }
                else{
                     int temp2=abs(y);
                    int temp3=P['U'];
                    int temp4=P['R'];
                    if((temp3>=temp2)&&(temp4>=temp )){
                        cout<<"YES"<<endl;
                    }
                    else cout<<"NO"<<endl;
                }
            }
        }
    }
}
