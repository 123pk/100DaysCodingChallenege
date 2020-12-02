/*
Problem code :- 1446A
Question link :- https://codeforces.com/problemset/problem/1446/A
There are two case in which we need to think of 
Case 1:- there is an element 'x' in array which is [ w/2 ] <= x <= w  in this case we will simply print the index of x 
Case 2:- there are some elements in array whose 'tot' is [ w/2 ] <= tot <= w 
apart from these two cases all cases have no answer or we will print -1.

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin >> t ;
    
    while( t-- ){
        int n ;
        long long int w ;
        cin >> n >> w ;
        
        long int A[n] ;
        int g = 0 , f = 0 ;
        long long int ans = -1 ;
        long long int tot = 0 ;
        vector< long int > P ;
        for(int i = 0; i < n ; ++i )
        {
            cin>> A[i] ;

            if( ( A[i] >= ( w+1 )/2 ) && ( A[i] <= w ) )     // Case 1 check
            {
                ans = i+1;
                g = 1 ;
            }
           
           if( ( tot + A[i] ) <= w )
           {
               P.push_back( i+1 ) ;
               tot += A[i] ;
           }

           if( ( tot <= w )  && (tot >= (w+1)/2 ))     // Case 2 check and if it satisfies we will maintain an array of index of all those values
           {
               f=1;
           }
        }

        if(f || g ){
            if( g ){
                cout<< 1 << endl ;
                cout<< ans << endl ;
            }
            else {
                cout<< P.size() << endl ;
                for( auto x : P ){
                    cout<< x <<" ";
                }
                cout<<endl;
            }
        }
        else{
            cout<< -1 << endl ;
        }
    }
}
