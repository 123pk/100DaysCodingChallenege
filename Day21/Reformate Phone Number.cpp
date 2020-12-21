/*
Platform :- Leetcode
Problem:- Reformate Phone Number
Approach :- make form of 3 characters and if there is 4 character is left  divide it into two
*/

class Solution {
public:
    string reformatNumber(string number) {
        string ans="";
        for(auto x:number){
            if('0'<=x && x<='9'){
                ans+=x;
                
            }
        }
        
        string z="";
        int c=0;
        for(int i=0;i<ans.size();++i){
            if(ans.size()-c==4){
                cout<<" * ";
                z+=ans[i];
                z+=ans[i+1];
                z+='-';
                z+=ans[i+2];
                z+=ans[i+3];
                break;
            }
            else{
                if(i+1-c==3){
                    z+=ans[i];
                    if(i!=ans.size()-1)z+="-";
                    c=i+1;
                    
                }
                else{
                    z+=ans[i];
                }
            }
        }
        return z;
    }
};
