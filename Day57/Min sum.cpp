/*
Platform :- Interviewbit
Contest :- Codenation Hiring test
Problem :- Min sum
Hint :- Using hash map find the maximum value of (frequency*value of element ) and subtract from original sum
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  
  long int A[n];
  map<long int,int>P;
  long int tot=0;
  for(int i=0;i<n;++i){
     cin>>A[i];
    P[A[i]]++;
    tot+=A[i];
  }
  
  long int mx=-1;
  for( auto x: P){
    long int temp= x.first * x.second;
    mx=max( mx, temp);
  }
  
  tot-= mx;
  
  cout << tot << endl;
}
