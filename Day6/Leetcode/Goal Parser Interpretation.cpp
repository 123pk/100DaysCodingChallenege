/*
Platform :- Leetcode
Question :- Global Parser Interpretation ( Weekly contest 218 )
Approach :- check for (),(al) & G - in the string and replace with desired characters 
*/
class Solution {
public:
    string interpret(string c) {
        string ans;
        int f=0;
        for(int i=0;i<c.size();++i){
            if(c[i]=='G'){
                ans+=c[i];
            }
            else{
                if(f){
                    if(c[i]==')')
                    {
                        ans+='o';
                        f=0;
                    }
                    else
                    {
                        ans+="al";
                        i+=2;
                        f=0;
                    }
                }
                else 
                {
                    if(c[i]=='('){
                        f=1;
                    }
                }
            }
        }
        
        return ans;
    }
};
