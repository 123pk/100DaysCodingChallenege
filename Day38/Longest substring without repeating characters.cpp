/*
Platform :- Leetcode
Problem:- Longest Substring without repeating characters
Approach :- traverse through array and use map to store index of character ( 1 based indexing ) if you find any element that is already present then if the value of count( c)
            if( (i+1)-P[s[i]] ) < = c ) then the charcter is withing the current substring so we will change value of c --> to ( i+1 - P[s[i]]) and update index of character 
            accordingly 
*/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>P;
        int c=0,mx=0;
        for(int i=0;i<s.size();++i){
           if(P[s[i]]){
               c++;
               if((i+1-P[s[i]])<=c)c=(i+1)-P[s[i]];
               
               P[s[i]]=i+1;
               mx=max(mx,c);
           } 
            else{
                P[s[i]]=i+1;
                c++;
                mx=max(mx,c);
            }
        }
        return mx;
    }
};
