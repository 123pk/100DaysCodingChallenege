/*
Platform :- Leetcode
Problem :- Count the Number of Consistent Strings
Approach :- We can use map for knowing which characeters are present in 'allowed' string and we will 
            itterate through the vector of string and check if all elements of string is already present in out map or not.

*/

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
       map<char,int>P;
        for(auto x:allowed)P[x]++;
        
        int c=0;
        for(auto x:words){
            int f=0;
            for(auto y:x){
                if(P[y]==0){
                    f=1;
                    break;
                }
            }
            if(f==0)c++;
        }
        
        return c;
    }
};
