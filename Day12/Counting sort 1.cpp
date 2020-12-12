/*
Platform :- Hackerrank
Problem :- Counting Sort 1
Approach :- create an array of size 100 as we know element of array are going to be atmax 99
            and increment the count of element corresponding to its index.
*/

#include <bits/stdc++.h>

using namespace std;


// Complete the countingSort function below.
vector<int> countingSort(vector<int> arr) {
   vector<int>P(100);
   for(auto x:arr){
       P[x]++;
   }
   return P;

}

int main()
{


    int n;
    cin >> n;
    
    vector<int>arr(n);
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    
    vector<int> ans = countingSort(arr);
    
    for(auto x:ans)cout<<x<<" ";
    cout<<endl;
}
    
