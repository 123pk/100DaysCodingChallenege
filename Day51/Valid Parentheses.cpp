/*
Platform :- Leetcode
Problem :- Valid Parentheses
*/

class Solution {
public:
    bool isValid(string s) {
        stack<char>P;
        int f=0;
        for(auto x:s){
            if((x=='{'||x=='[' || x=='(')){
                P.push(x);
            }
            else{
                if(P.empty()){
                    f=1;break;
                }
                if(x=='}'){
                    if(P.top()=='{'){
                        P.pop();
                    }
                    else{
                        f=1;break;
                    }
                }
                else if(x==')'){
                        if(P.top()=='('){
                          P.pop();
                        }
                        else{
                            f=1;break;
                        }
                }
                else {
                    if(P.top()=='['){
                        P.pop();
                    }
                    else{
                        f=1;break;
                    }
                }
            }
        }
        
        if(!P.empty() || f)return false;
        return true;
    }
};
