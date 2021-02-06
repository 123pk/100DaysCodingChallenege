/*
Platform :- Leetcode
Event :- February Daily challenge 
Problem :- Binary Tree Right View
*/

class Solution {
public:
    int minimumLength(string s) {
        int start=0,end=s.size()-1;
        int tot=s.size();
        while(start< end){
            if(s[start]!=s[end]){
                break;
            }
            int c=1;
            int i=start+1;
            while(i<end){
                if(s[start]==s[i]){
                    i++;
                    c++;
                }
                else break;
            }
            
            int j=end-1;
            int d=1;
            if(i!=end){
            while(start<j){
                if(s[end]==s[j]){
                    j--;
                    d++;
                }
                else break;
            }
            }
             
            tot-=(c+d);
            start=i;
            end=j;
             
        }
        return tot;
    }
};
