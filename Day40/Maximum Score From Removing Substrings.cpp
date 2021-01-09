/*
Platform :- Leetcode
Problem :- Maximum Score From Removing Substrings
*/

class Solution {
public:
    int maximumGain(string s, int x1, int y) {
        int d=0,tot=0,e=0,f=0,h=0;
        
        for(auto x:s){
            if(h==0){
                if(x=='a'||x=='b'){
                    if(x1>=y){
                        if(x=='b'){
                            if(e){
                                tot+=x1;
                                e--;
                            }
                            else{
                                f++;
                            }
                        }
                        else{
                            e++;
                        }
                    }
                    else{
                        if(x=='a'){
                            if(f){
                                tot+=y;
                                f--;
                            }
                            else{
                                e++;
                            }
                        }
                        else{
                            f++;
                        }
                    }
                }
                else{
                    h=1;
                    if(e&&f){
                        if(x1>=y){
                            tot+=min(e,f)*y;
                        }
                        else{
                            tot+=min(e,f)*x1;
                        }
                    }
                    f=0;e=0;h=1;
                }
            }
            else{
                if(x=='a'||x=='b'){
                    h=0;
                    if(x=='a'){
                        e++;
                    }
                    else{
                        f++;
                    }
                }
                else{
                    h=1;
                    if(e&&f){
                        if(x1>=y){
                            tot+=min(e,f)*y;
                        }
                        else{
                            tot+=min(e,f)*x1;
                        }
                    }
                    f=0;e=0;h=1;
                }
            }
            //cout<<tot<<" "<<e<<" "<<f<<endl;
        }
        if(e&&f){
             if(x1>=y){
                            tot+=min(e,f)*y;
                        }
                        else{
                            tot+=min(e,f)*x1;
                        }
        }
        return tot;
    }
};
