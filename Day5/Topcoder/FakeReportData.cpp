#include<bits/stdc++.h>
using namespace std;

class  FakeReportData{
    public:
      vector <int> generate(int N, int D){
               int c=0;
               string s;
               for(char ch='1';ch<='9';++ch){
                   s+=ch;
               }
               
               string temp=s;
               s+='0';
               s+=temp;
               vector<int>ans;
               string z;
               for(int i=0;i<D;++i){
                   z+=s[i];
               }
               
              ans.push_back(stoi(z));
          c++;
              if(c==N){
                  return ans;
              }
              for(int i=D;i<s.size();++i){
                  z.erase(z.begin());
                  z+=s[i];
                  ans.push_back(stoi(z));
                  c++;
                  if(c==N){
                      return ans;
                  }
              }
           
           return ans;
              
           }
    };
