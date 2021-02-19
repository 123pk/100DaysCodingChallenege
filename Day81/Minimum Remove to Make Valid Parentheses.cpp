/*
Platform :- Leetcode
Event :- February Daily challenge
Problem :- Minimum Remove to Make Valid Parentheses
*/

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string ans;
        stack<char>P;
        int c=0;
        for(auto x:s){
            if(x=='('){
                P.push(x);
            }
            else{
                if(x==')'){
                    if(!P.empty()){
                        P.pop();
                        c++;
                    }
                }
            }
        }
        
        int d=c;
        int k=0;
        for(auto x:s){
            if(x=='(' || x==')'){
                if(d||c){
                   if(x=='('){
                       if(c){
                           k++;
                           ans+=x;
                           c--;
                       }
                   }
                    else {
                        if(d && k){
                            k--;
                            ans+=x;
                            d--;
                        }
                    }
                }
            }
            else ans+=x;
        }
        return ans;
    }
};
