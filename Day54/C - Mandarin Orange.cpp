/*
Platform :- Atcoder
Problem :- C - Mandarin Orange
*/

#include<bits/stdc++.h>
using namespace std;

long long  pk(long int hist[], int n) 
{ 
      
    stack<int> s; 
  
    long long max_area = 0; 
    long int tp;   
    long long area_with_top;  
  
     
    int i = 0; 
    while (i < n) 
    { 
        
        if (s.empty() || hist[s.top()] <= hist[i]) 
            s.push(i++); 
  
         
        else
        { 
            tp = s.top();   
            s.pop();  
  
           
            area_with_top = hist[tp] * (s.empty() ? i :  i - s.top() - 1); 

            if (max_area < area_with_top) 
                max_area = area_with_top; 
        } 
    } 
  
     
    while (s.empty() == false) 
    { 
        tp = s.top(); 
        s.pop(); 
        area_with_top = hist[tp] * (s.empty() ? i :  
                                i - s.top() - 1); 
  
        if (max_area < area_with_top) 
            max_area = area_with_top; 
    } 
  
    return max_area; 
} 

int main(){
   int n;
   cin>>n;
   
   long int A[n];
   
   for(int i=0;i<n;++i){
       cin>>A[i];
   }
    
    long long ans=pk(A,n);
    
    cout<<ans<<endl;
   
}
