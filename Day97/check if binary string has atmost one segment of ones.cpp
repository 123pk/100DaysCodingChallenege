/*
Platform :- Leetcode
Problem :- Check if binary string has atmost one segment of ones
Contest:- Weekly contest 231
*/

class Solution {
public:
    bool checkOnesSegment(string s) {
        int f=0;
        int c=0;
        for(int i=0;i<s.size();++i){
            if(f){
                if(s[i]=='0'){
                    f=0;
                }
                
            }
            else{
                if(s[i]=='1'){
                    f=1;c++;
                }
            }
        }
        if(c==1)return true;
        return false;
    }
};
