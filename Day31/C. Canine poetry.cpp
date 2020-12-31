/*
Platform :- Codeforces
Problem :- C.Canine poetry
Approach :- we can easily see that for palindrome os size > 3 there is always a smaller size palindrome in it of size 2 or size 3.
            we need to remove or change all those characters which form a palindrome of size 2 or 3 . we will travese through array from i=1 to i<=s.size()-1
            we will ccheck if ( A[i] == A[i-1] ) then A[i] ='@' count++; 
                else we will check for size 3 palindrome if ( i>1 && A[i] ==A[i-2] ) A[i]='@'count++;
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        int c=0;
        for(int i=1;i<s.size();++i){
            if(s[i]==s[i-1]){
                s[i]='@';
                c++;
            }
            else{
                if(i>1 && s[i]==s[i-2]){
                    s[i]='@';
                    c++;
                }
            }
        }
        
        cout<<(c)<<endl;
    }
}
