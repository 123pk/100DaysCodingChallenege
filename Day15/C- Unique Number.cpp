/*
Platform :- Codeforces
Problem :- C- Unique Number
Approach :- take a temp value and start decreasing x by temp if (x-temp)>=0 ,if temp become 0 and x!=0 then we print -1 or when we have no other option than using duplicates
           then also answer is -1 else print the string of values of temp by rearranging to lexiographically smallest string of temp values.
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;cin>>x;
        if(x<10)cout<<x<<endl;
        else if(x>45)cout<<-1<<endl;
        else{
            int temp=9;
            map<int,int>P;
            int tot=0;
            int f=0;int zz=x;
            while(x){
                if(P[temp]==0){
                    if(temp==x){
                     
                        break;
                    }
                    if((x-temp)>0){
                        x-=temp;
                        P[temp]++;
                        temp--;
                    }
                    else{
                        temp--;
                    }
                }
                else{
                    temp--;
                }
                if(temp==0){
                    f=1;break;
                }
               
            }
            if(f)cout<<-1<<endl;
            else{
                string ans="";
                
                x=zz;temp=9;
                map<int,int>P;
                while(x){
                if(P[temp]==0){
                    if(temp==x){
                        f=1;
                        ans+=to_string(temp);
                        break;
                    }
                    if((x-temp)>0){
                        P[temp]++;
                        x-=temp;
                        ans+=to_string(temp);
                        temp--;
                    }
                    else{
                        temp--;
                    }
                }
                else{
                   
                    temp--;
                }
                if(temp==0){
                   break;
                }
            }
            sort(ans.begin(),ans.end());
            cout<<ans<<endl;
            }
        }
    }
}
