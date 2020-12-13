/*
Platform :- Leetcode
Problem :- Count of matches in tournament
Approach :- Do the operations said in question ( Brute force ).
*/
class Solution {
public:
    int numberOfMatches(int n) {
        int c=0;
        long int z=0;
        while(n){
            if(n%2){
                n--;
                z++;
            }
            if( n==0)break;
           
            n/=2;
            c+=n;
            n+=z;
            z=0;
            
             
        }
        return c;
    }
};
