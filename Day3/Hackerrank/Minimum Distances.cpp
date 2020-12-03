/*
  Platform :- Hackerrank
  Question name:- Minimum Distances 
  Approach :- store the index of elements using map while traversing through array . if you find any element that is already present calcluate the difference of indexes 
              and return the minimum of all such values
*/

#include <bits/stdc++.h>

using namespace std;

// Complete the minimumDistances function below.
int minimumDistances(vector<int> a) {
  
  int ans=INT_MAX,f=0;
  map<int,int>P;
  for(int i=0;i<a.size();++i){
      if(P[a[i]])                    // if current element is already present 
      {   
          f=1;
          ans=min(ans,(i+1-P[a[i]]));        //store the minimum of such differences 
      }
      else{
          P[a[i]]=i+1;                       // if element is occuring for first time we store its index
      }
  }
  if(f)return ans;
  return -1;
  
}

int main()
{
   int n;
   cin>>n;
   
   vector<int>a(n);
   for(int i=0;i<n;++i){
       cin>>a[i];
   }
   
   cout<<(minimumDistances(a))<<endl;
}
