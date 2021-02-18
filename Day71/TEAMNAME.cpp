/*
Platform :- Codechef
Event :- February Long 2021
Problem :- Team name (TEAMNAME)

SOLUTION WILL BE ADDED ONCE CONTEST IS OVER 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        map<char,set<string>>P;
        set<char>Z;
        vector<char>Q;
        
        for(int i=0;i<n;++i){
            string temp;
            cin>>temp;
            Z.insert(temp[0]);
            char ch=temp[0];
            temp.erase(temp.begin());
            P[ch].insert(temp);
        }
        
        for(auto x:Z){
             Q.push_back(x);
        }
        
        int tot=0;
        for(int i=0;i<Q.size();++i){
            for(int j=i+1;j<Q.size();++j){
                 
                 int temp=P[Q[i]].size();
                 int temp2=P[Q[j]].size();
                 int d=0;
                 if(temp<temp2){
                     set<string>z=P[Q[i]];
                     set<string>z2=P[Q[j]];
                     for(auto x:z){
                         if(z2.find(x)!=z2.end()){
                             d++;
                         }
                     }
                     tot+=( (temp2-d)* (temp-d))*2;
                 }
                 else{
                     //cout<<" % ";
                     
                     set<string>z=P[Q[i]];
                     set<string>z2=P[Q[j]];
                     for(auto x:z2){
                         if(z.find(x)!=z.end()){
                             d++;
                         }
                     }
                     tot+=((temp2-d)*(temp-d))*2;
                 }
            }
            // cout<<tot<<" * "<<Q[i]<<endl;
        }
        cout<<tot<<endl;
    }
}
