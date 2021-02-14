/*
Platform :- Leetcode
Contest :- Weekly contest 228
Problem :- Minimum chnages to make atlernating binary string
*/

class Solution {
public:
    int minOperations(string s) {
        int a1=0,a2=0,b1=0,b2=0;
        for(int i=0;i<s.size();++i){
            if(i%2){
                if(s[i]=='1'){
                    a1++;
                }
                else{
                    a2++;
                }
            }
            else{
                if(s[i]=='1'){
                    b1++;
                }
                else{
                    b2++;
                }
            }
        }
        
        int temp=a2+b1;
        int temp2=a1+b2;
        return min(temp,temp2);
    }
};
