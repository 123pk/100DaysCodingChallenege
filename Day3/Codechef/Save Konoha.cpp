/*
Platform :- Codechef
Problem :- Save Konoha (SAVKONO)
Approach :- It is implementation problem . The basic idea is -
      i. decrease the value of Z by largest elemets of array as we need minimum steps for which we can use max Priority Queue
      ii. decrease the value of element to half( A-->  A/2 )
      iii. check if A == 0 or not , if not then push the updated value
      iv. continue until Z>0 and Array is not empty

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        long int Z;
        cin>>n>>Z;
        
        priority_queue<long int>A;
        for(int i=0;i<n;++i){
            long int x;
            cin>>x;
            A.push(x);
        }
        
        int c=0;
        while(Z>0 && !A.empty()){
            long int temp= A.top();
            A.pop();
            
            Z-=temp;
            temp/=2;
            if(temp)A.push(temp);
            c++;
        }
        
        if(Z>0)cout<<"Evacuate"<<endl;
        else cout<<c<<endl;
    }
}
